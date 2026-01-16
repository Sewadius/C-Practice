// Задание 5 - из Цельсия в Фаренгейты
#include <iostream>
using namespace std;

int celsius_to_fahrenheit(int);

int main() {
    int value;

    cout << "Please enter a Celsius value: ";
    cin >> value;

    int result = celsius_to_fahrenheit(value);

    cout << value << " degrees Celsius is " << result
        << " degrees Fahrenheit.\n";
    
    return 0;
}

// Перевод температуры из Цельсия в Фаренгейты
int celsius_to_fahrenheit(int celsius) {
    return static_cast<int>(1.8 * celsius + 32 + 0.5);
}

