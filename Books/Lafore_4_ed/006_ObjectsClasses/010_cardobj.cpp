// Page 242 - игральные карты в качестве объектов
#include <iostream>
using namespace std;

enum Suit { clubs, diamonds, hearts, spades };

const int 
    JACK = 11, QUEEN = 12, KING = 13, ACE = 14;

void printChangeMsg(int, int);      // Сообщение о смене карт местами

class Card {
private:
    int number;
    Suit suit;
public:
    Card() {}
    Card(int n, Suit s) : number(n), suit(s) {}
    void display() const;
    bool isEqual(Card) const;
    void printInfo(int) const;
};

// Вывод карты на экран
void Card::display() const {
    if (number >= 2 && number <= 10) cout << number << ' ';
    else
        switch (number) {
            case JACK: cout << "Валет "; break;
            case QUEEN: cout << "Дама "; break;
            case KING: cout << "Король "; break;
            case ACE: cout << "Туз "; break;
        }
    
    switch (suit) {
        case clubs: cout << "треф"; break;
        case diamonds: cout << "бубен"; break;
        case hearts: cout << "червей"; break;
        case spades: cout << "пик"; break;
    }
}

// Сравнение двух карт
bool Card::isEqual(Card card2) const {
    return number == card2.number && suit == card2.suit;
}

// Отображение информации по карте
void Card::printInfo(int pos) const {
    cout << "\nКарта " << pos << ": ";
    this->display();
}

int main() {
    Card temp, chosen, prize;
    int position;
    int n = 0;

    // Создание карт
    Card card1(7, clubs), card2(JACK, hearts), card3(ACE, spades);

    // Вывод информации по картам
    card1.printInfo(++n); card2.printInfo(++n); card3.printInfo(++n);

    prize = card3;      // Карту 3 следует угадать
    
    printChangeMsg(1, 3);
    temp = card3; card3 = card1; card1 = temp;

    printChangeMsg(2, 3);
    temp = card3; card3 = card2; card2 = temp;

    printChangeMsg(1, 2);
    temp = card2; card2 = card1; card1 = temp;

    cout << "\nНа какой позиции (1, 2 или 3) теперь ";
    prize.display();
    cout << "? ";

    cin >> position;
    switch (position) {
        case 1: chosen = card1; break;
        case 2: chosen = card2; break;
        case 3: chosen = card3; break;
    }

    if (chosen.isEqual(prize)) cout << "Правильно! Вы выиграли!";
    else cout << "Неверно. Вы проиграли.";

    cout << "\nВы выбрали карту: ";
    chosen.display();

    cout << endl;
    return 0;
}

// Сообщение о смене карт местами
void printChangeMsg(int a, int b) {
    cout << "\nМеняем местами карты " << a << " и "
        << b << "...";
}

