// Page 226 - класс как тип данных
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    // Установка значений полей
    void setdist(int ft, float in)
        { feet = ft; inches = in; }

    // Ввод полей с клавиатуры
    void getdist() {
        cout << "Введите число футов: "; cin >> feet;
        cout << "Введите число дюймов: "; cin >> inches;
    }

    // Вывод полей на экран
    void showdist()
        { cout << feet << "\'-" << inches << '\"'; }
};

int main() {
    Distance d1, d2;
    d1.setdist(11, 6.25);
    d2.getdist();

    // Вывод длин на экран
    cout << "\ndist1 - "; d1.showdist();
    cout << "\ndist2 - "; d2.showdist();
    cout << endl;

    return 0;
}

