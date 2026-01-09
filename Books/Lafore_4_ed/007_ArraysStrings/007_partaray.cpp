// Page 273 - массивы стректур
#include <iostream>
using namespace std;

const int SIZE = 2;

struct Part {
    int modelnumber;
    int partnumber;
    float cost;
};

int main() {
    Part apart[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        cout << "Введите номер модели: "; 
        cin >> apart[i].modelnumber;

        cout << "Введите номер части: ";
        cin >> apart[i].partnumber;

        cout << "Введите стоимость: ";
        cin >> apart[i].cost;
    }

    cout << endl;

    for (int i = 0; i < SIZE; ++i) {
        cout << "Модель " << apart[i].modelnumber;
        cout << ", часть " << apart[i].partnumber;
        cout << ", стоимость " << apart[i].cost << endl;
    }

    return 0;
}

