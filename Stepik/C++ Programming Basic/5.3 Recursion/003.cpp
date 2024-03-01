// 4. Fibonacci Minute
#include <iostream>
using std::cout;

int fib(int);

int main() {
    int num;

    cout << "Enter the ordinal number of the Fibonacci number: ";
    std::cin >> num;

    cout << "The number is: " << fib(num) << "\n\n";

    system("pause");
    return 0;
}

int fib(int number) {
    if (number == 1) return 0;
    if (number == 2) return 1;

    return fib(number - 1) + fib(number - 2);
}
