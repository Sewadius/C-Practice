// 1. Office Programmer Program
#include <iostream>
using std::cout;
using std::cin;

int main() {
    int number;
    int value = INT_MIN;

    cout << "Enter two integers: ";

    for (size_t i = 0; i < 2; i++) {
        cin >> number;
        if (value < number) value = number;
    }

    cout << "The largest number: " << value << "\n\n";
    system("pause");
    return 0;
}
