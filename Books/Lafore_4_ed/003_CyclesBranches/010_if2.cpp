// Page 110 - несколько операторов if
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Введите число: ";
    cin >> x;

    if (x > 100) {
        cout << "Число " << x;
        cout << " больше, чем 100" << endl;
    }

    return 0;
}

