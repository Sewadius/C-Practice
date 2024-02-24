#include <iostream>
using std::cout;
using std::cin;

int main() {
    int a;
    const int FIVE = 5;

    cout << "Введите число: "; cin >> a;

    if (a > FIVE)
        cout << "Число больше ";
    else if (a == FIVE)
        cout << "Число равно ";
    else
        cout << "Число меньше ";

    cout << FIVE << "\n";

    return 0;
}
