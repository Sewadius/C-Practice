// Page 267 - многомерные массивы
#include <iostream>
#include <iomanip>
using namespace std;

const int
    DISTRICTS = 4,
    MONTHS = 3;

int main() {
    int d, m;
    double sales[DISTRICTS][MONTHS];

    for (d = 0; d < DISTRICTS; d++)
        for (m = 0; m < MONTHS; m++) {
            cout << "Введите объем продаж для отдела " << d + 1;
            cout << ", за месяц " << m + 1 << ": ";
            cin >> sales[d][m];
        }


    return 0;
}

