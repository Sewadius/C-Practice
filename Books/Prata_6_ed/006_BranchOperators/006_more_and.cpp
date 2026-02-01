// Page 268 - использование логической операции "И"
#include <iostream>
using namespace std;

const char* qualify[4] = {
    "10,000-meter race.\n",         // Забег на 10 000 метров
    "mud tug-of-war.\n",            // Перетягивание каната в грязи
    "masters canoe jousting.\n",    // Состязания мастеров каноэ
    "pie-throwing festival.\n",     // Фестиваль по бросанию пирожков
};

int main() {
    int age;
    cout << "Enter your age in years: ";
    cin >> age;

    int index;
    if (age > 17 && age < 35) index = 0;
    else if (age >= 35 && age < 50) index = 1;
    else if (age >= 50 && age < 65) index = 2;
    else index = 3;

    cout << "You qualify for the " << qualify[index];

    return 0;
}

