// Page 239 - объекты, возвращаемые функцией
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    Distance() : feet(0), inches(0.0) {}
    Distance(int ft, float in) : feet(ft), inches(in) {}

    void getdist() {
        cout << "Введите число футов: "; cin >> feet;
        cout << "Введите число дюймов: "; cin >> inches;
    }

    void showdist() const 
        { cout << feet << "\'-" << inches <<  '\"'; }

    Distance add_dist(Distance);
};

// Сложение данного объекта с d2, возврат суммы
Distance Distance::add_dist(Distance d2) {
    Distance temp;
    temp.inches = inches + d2.inches;
    temp.feet = 0;

    if (temp.inches >= 12.0) {
        temp.inches -= 12.0;
        temp.feet++;
    }

    temp.feet += feet + d2.feet;
    return temp;
}

int main() {
    Distance d1, d3;
    Distance d2(11, 6.25);

    d1.getdist();
    d3 = d1.add_dist(d2);

    // Вывод всех длин
    cout << "\ndist1 = "; d1.showdist();
    cout << "\ndist2 = "; d2.showdist();
    cout << "\ndist3 = "; d3.showdist();
    cout << endl;

    return 0;
}

