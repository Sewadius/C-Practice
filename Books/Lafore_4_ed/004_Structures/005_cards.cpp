// Page 154 - игральные карты как структура
#include <iostream>
using namespace std;

// Масти
const int
    CLUBS = 0, DIAMODS = 1, HEARTS = 2, SPADES  = 3;

// Достоинства карт
const int
    JACK = 11, QUEEN = 12, KING = 13, ACE = 14;

struct Card {
    int number;
    int suit;
};

int main() {
    Card temp, chosen, prize;
    int position;

    Card card1 = { 7, CLUBS};
    cout << "Карта 1: 7 треф\n";

    Card card2 = { JACK, HEARTS };
    cout << "Карта 2: валет червей\n";

    Card card3 = { ACE, SPADES };
    cout << "Карта 3: туз пик\n";

    prize = card3;      // Запоминаем карту 3

    cout << "Меняем местами карту 1 и карту 3...\n";
    temp = card3; card3 = card1; card1 = temp;

    cout << "Меняем местами карту 2 и карту 3...\n";
    temp = card3; card3 = card2; card2 = temp;

    cout << "Меняем местами карту 1 и карту 2...\n";
    temp = card2; card2 = card1; card1 = temp;

    cout << "На какой позиции (1, 2 или 3) теперь туз пик? ";
    cin >> position;

    switch (position) {
        case 1: chosen = card1; break;
        case 2: chosen = card2; break;
        case 3: chosen = card3; break;
    }

    if (chosen.number == prize.number && chosen.suit == prize.suit) {
        cout << "Правильно! Вы выиграли!\n";
    } else {
        cout << "Неверно. Вы проиграли.\n";
    }

    return 0;
}


