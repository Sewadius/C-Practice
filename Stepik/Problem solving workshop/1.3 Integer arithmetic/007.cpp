#include <iostream>
using std::cout;
using std::cin;

int main() {
    int number;
    cin >> number;
    int firsrt = number / 100;
    int second = number / 10 % 10;
    int third = number % 10;
    cout << firsrt << ", " << second << ", " << third;
    return 0;
}
