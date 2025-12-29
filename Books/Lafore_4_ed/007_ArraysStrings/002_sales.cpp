// Page 264 - средний дневной объем продаж
#include <iostream>
using namespace std;

const int SIZE = 6;

int main() {
    double sales[SIZE];

    cout << "Введите объём продаж на каждый из шести дней\n";

    for (int j = 0; j < SIZE; j++) {
        cout << j + 1 << ": ";
        cin >> sales[j];
    }

    double total = 0;

    for (int j = 0; j < SIZE; j++)
        total += sales[j];

    double average = total / SIZE;
    cout << "Средний объем: " << average << endl;

    return 0;
}

