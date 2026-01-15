// Задание 4 - возраст из лет в месяцы
#include <iostream>
using namespace std;

const int MONTHS = 12;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Your age in months is " << age * MONTHS << ".\n";
    
    return 0;
}

