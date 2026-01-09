// Page 278 - массивы интервалов
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    void getdist() {
        cout << "\nВведите футы: "; cin >> feet;
        cout << "Введите дюймы: "; cin >> inches;
    }

    void showdist() const 
        { cout << feet << "\'-" << inches << '\"'; }
};

int main() {
    Distance dist[100];     // Массив переменных
    int n = 0;              // Счетчик данных
    char ans;               // Ответ пользователя

    do {
        cout << "Введите длину номер " << n + 1;
        dist[n++].getdist();
        cout << "Продолжить ввод (y/n)?: ";
        cin >> ans;
    } while (ans != 'n');

    for (int i = 0; i < n; ++i) {
        cout << "\nДлина номер " << i + 1 << ": ";
        dist[i].showdist();
    }

    cout << endl;
    return 0;
}
