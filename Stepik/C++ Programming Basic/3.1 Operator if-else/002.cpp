// 2. Square root
#include <iostream>
using std::cout;

bool checkNumber(int);

int main() {
    int number;
    cout << "Enter the integer: ";
    std::cin >> number;

    cout << (checkNumber(number) ? "YES" : "NO") << "\n\n";

    system("pause");
    return 0;
}

bool checkNumber(int a) {
    return a >= 0;
}
