// 3. Factorials
#include <iostream>
using std::cout;

long long int factorial(int);

int main() {
    int num;

    cout << "Enter the number: ";
    std::cin >> num;

    cout << "Factorial is " << factorial(num) << '\n';

    system("pause");
    return 0;
}

long long int factorial(int number) {
    if (number == 1) return 1;
    return number * factorial(number - 1);
}
