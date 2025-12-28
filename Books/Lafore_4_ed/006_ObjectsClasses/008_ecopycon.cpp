// Page 237 - конструктор копирования по умолчанию
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
        cout << "\nВведите число футов: "; cin >> feet;
        cout << "Введите число дюймов: "; cin >> inches;
    }

    void showdist() const 
        { cout << feet << "\'-" << inches <<  '\"'; }
};

int main() {
    Distance d1(11, 6.25);
    Distance d2(d1);
    Distance d3 = d1;

    // Вывод всех длин
    cout << "dist1 = "; d1.showdist();
    cout << "\ndist2 = "; d2.showdist();
    cout << "\ndist3 = "; d3.showdist();
    cout << endl;

    return 0;
}
