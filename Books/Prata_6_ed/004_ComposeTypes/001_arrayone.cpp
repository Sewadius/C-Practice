// Page 134 - небольшие массивы целых чисел
#include <iostream>
using namespace std;

int main() {
    int yams[3];            // Массив из трех элементов
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;
    
    // Создание и инициализация массива
    int yamcosts[3] = { 20, 30, 5 };

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;

    cout << "The package with " << yams[1] << " yams costs "
        << yamcosts[1] << " cents per yam.\n";

    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total += yams[2] * yamcosts[2];

    cout << "The total yam expense is " << total << " cents.\n";
    cout << "\nSize of yams array = " << sizeof yams << " bytes.\n";

    cout << "Size of one element = " << sizeof yams[0] << " bytes.\n";
    
    return 0;
}

