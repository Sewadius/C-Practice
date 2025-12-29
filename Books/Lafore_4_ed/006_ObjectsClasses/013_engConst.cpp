// Page 251 - константные методы и аргументы
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
        cout << "Введите количество футов: "; cin >> feet;
        cout << "Введите количество дюймов: "; cin >> inches;
    }

    void showdist() const 
        { cout << feet << "\'-" << inches << '\"'; }

    Distance add_dist(const Distance&) const;
};

Distance Distance::add_dist(const Distance& d2) const {
    Distance temp;
    temp.inches = inches + d2.inches;

    if (temp.inches >= 12.0) {
        temp.inches -= 12.0;
        temp.feet = 1;
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

