// Page 147 - инициализация структурных переменных
#include <iostream>
using namespace std;

struct part {
    int modelnumber;
    int partnumber;
    float cost;
};

int main() {
    part part1 = { 6244, 373, 217.55F };
    part part2;

    cout << "Модель: " << part1.modelnumber << endl;
    cout << "Деталь: " << part1.partnumber << endl;
    cout << "Стоимость $" << part1.cost << endl;

    part2 = part1;

    // Вывод полей второй переменной
    cout << "\nМодель: " << part2.modelnumber << endl;
    cout << "Деталь: " << part2.partnumber << endl;
    cout << "Стоимость $" << part2.cost << endl;

    return 0;
}

