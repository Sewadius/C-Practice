// Page 195 - перегрузка функций, разные типы
#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

void engldisp(Distance);
void engldisp(float);

int main() {
    Distance d1;
    float d2;

    // Ввод значения d1
    cout << "Введите количество футов: "; cin >> d1.feet;
    cout << "Введите число дюймов: "; cin >> d1.inches;

    // Ввод значения d2
    cout << "Введите длину в дюймах: "; cin >> d2;

    // Вывод результатов
    cout << "\nd1 = "; engldisp(d1);
    cout << "\nd2 = "; engldisp(d2);
    
    cout << endl;
    return 0;
}

// Функция с типом Distance
void engldisp(Distance d) {
    cout << d.feet << "\'-" << d.inches << "\"";
}

// Функция с типом float
void engldisp(float d) {
    int feet = static_cast<int>(d / 12);
    float inches = d - feet * 12;

    cout << feet << "\'-" << inches << "\"";
}

