#include <iostream>
using std::cout;
using std::cin;

int main() {
    int x, y, average;
    cin >> x >> y;
    average = (x + y) / 2;

    cout << "Среднее арифметическое " << average << 
        " разница для Тани " << x - average << 
            " разница для Мити " << y - average;

    return 0;
}
