// Задание 1 - телефонные коды
#include <iostream>
using std::cout, std::cin;

struct Phone {
    int city;
    int station;
    int subscriber;
};

void printPhone(const Phone&);

int main() {
    Phone p1 = { 212, 767, 8900 };
    int city, station, subscriber;

    cout << "Введите код города, номер станции и номер абонента:\n";
    cin >> city >> station >> subscriber;

    Phone p2 = { city, station, subscriber };

    // Вывод результатов
    cout << "Мой номер "; printPhone(p1);
    cout << "Ваш номер "; printPhone(p2);

    return 0;
}

// Вывод итогового номера
void printPhone(const Phone& p) {
    cout << "(" << p.city << ") " << p.station
        << '-' << p.subscriber << '\n'; 
}
