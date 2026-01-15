// Задание 2 - перевод из фарлонгов в ярды
#include <iostream>
using namespace std;

const int YARDS_PER_FURLONG = 220;

int main() {
    int furlong;

    cout << "Введите целое расстояние в фарлонгах: ";
    cin >> furlong;

    cout << "Соответствует расстоянию в ярдах: " 
        << furlong * YARDS_PER_FURLONG << '\n';
        
    return 0;
}

