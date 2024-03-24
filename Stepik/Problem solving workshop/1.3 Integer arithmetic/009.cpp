#include <iostream>
using std::cout;
using std::cin;

int main() {
    int number;
    cin >> number;
    int firsrt = number % 10;
    int second = number / 10 % 10;
    
    number -= second * 10 + firsrt;
    number += firsrt * 10 + second;
    cout << number;
    return 0;
}
