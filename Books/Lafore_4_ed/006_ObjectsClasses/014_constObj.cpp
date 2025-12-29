// Page 252 - константные объекты
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    Distance(int ft, float in) : feet(ft), inches(in) {}

    void getdist() {
        cout << "Введите число футов: "; cin >> feet;
        cout << "Введите число дюймов: "; cin >> inches;
    }

    void showdist() const 
        { cout << feet << "\'-" << inches << '\"'; }
};

int main() {
    const Distance football(300, 0);

    cout << "Длина поля равна ";
    football.showdist();
    cout << endl;

    return 0;
}

