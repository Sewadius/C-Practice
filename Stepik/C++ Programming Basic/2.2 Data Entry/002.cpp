// 2. Primitive calculator
#include <iostream>
using std::cout;
using std::cin;

void printSum(int, int);

int main() {
    int a, b;

    cout << "Enter the first integer: ";
    cin >> a;

    cout << "Enter the second integer: ";
    cin >> b;

    printSum(a, b);
    system("pause");

    return 0;
}

void printSum(int a, int b) {
    cout << a << " + " << b << " = " << a + b << "\n\n";
}
