// Page 233 - объекты в качестве аргументов функций
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    Distance() : feet(0), inches(0.0) {}
    Distance(int ft, float in) : feet(ft), inches(in) {}

    // Ввод длины пользователем
    void getdist() {
        cout << "\nВведите число футов: "; cin >> feet;
        cout << "Введите число дюймов: "; cin >> inches;
    }

    // Вывод длины на экран
    void showdist() 
        { cout << feet << "\'-" << inches << '\"'; }

    void add_dist(Distance, Distance);
};

void Distance::add_dist(Distance d1, Distance d2) {
    inches = d1.inches + d2.inches;
    feet = 0;

    if (inches >= 12.0) {
        inches -= 12.0;
        feet++;
    }

    feet += d1.feet + d2.feet;
}

int main() {
    Distance d1, d3;
    Distance d2(11, 6.25);
    d1.getdist();
    d3.add_dist(d1, d2);

    // Вывод всех длин
    cout << "\ndist1 = "; d1.showdist();
    cout << "\ndist2 = "; d2.showdist();
    cout << "\ndist3 = "; d3.showdist();
    cout << endl;

    return 0;
}

