// Page 224 - детали изделния в качестве объектов
#include <iostream>
using namespace std;

class Part {
private:
    int _modelnumber;
    int _partnumber;
    float _cost;
    
public:
    // Установка данных
    void setpart(int mn, int pn, float c) {
        _modelnumber = mn;
        _partnumber = pn;
        _cost = c;
    }

    // Вывод данных
    void showpart() {
        cout << "Модель: " << _modelnumber;
        cout << ", деталь " << _partnumber;
        cout << ", стоимость $" << _cost << endl;
    }
};

int main() {
    Part part;

    part.setpart(6244, 373, 217.55F);
    part.showpart();

    return 0;
}

