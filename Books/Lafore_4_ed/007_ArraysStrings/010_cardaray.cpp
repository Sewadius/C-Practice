// Page 281 - массив из 52 игральных карт
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Suit {
    CLUBS, DIAMONDS, HEARTS, SPADES
};

const int
    JACK = 11, QUEEN = 12, KING = 13, ACE = 14;

const int SIZE = 52;    // Размер колоды

class Card {
private:
    int number;
    Suit suit;
public:
    Card() {}
    void set(int n, Suit s)
        { number = n; suit = s; }
    void display() const;
};

void Card::display() const {
    if (number >= 2 && number <= 10) cout << number;
    else {
        switch (number) {
            case JACK: cout << 'J'; break;
            case QUEEN: cout << 'Q'; break;
            case KING: cout << 'K'; break;
            case ACE: cout << 'A'; break;
        }

        switch (suit) {
            case CLUBS: cout << static_cast<char>(5); break;
            case DIAMONDS: cout << static_cast<char>(4); break;
            case HEARTS: cout << static_cast<char>(3); break;
            case SPADES: cout << static_cast<char>(6); break;
        }
    }
}

int main() {
    Card deck[SIZE];

    // Создание колоды карт
    for (int i = 0; i < SIZE; ++i) {
        int num = (i % 13) + 2;
        Suit su = Suit (i % 13);
        deck[i].set(num, su);
    }

    // Исходная колода
    cout << "Исходная колода:\n";

    for (int i = 0; i < SIZE; ++i) {
        deck[i].display();
        cout << " ";
        if (!((i + 1) % 13)) cout << endl;
    }

    // Перемешиваем колоду и выводим
    srand(time(NULL));

    for (int i = 0; i < SIZE; ++i) {
        int k = rand() % SIZE;
        Card temp = deck[i];
        deck[i] = deck[k];
        deck[k] = temp;
    }

    // Показываем перемешанную колоду
    cout << "\nПеремешанная колода:\n";

    for (int i = 0; i < SIZE; ++i) {
        deck[i].display();
        cout << " ";
        if (!((i + 1) % 13)) cout << endl;
    }

    return 0;
}

