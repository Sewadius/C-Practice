// 2469. Convert the Temperature
#include <iostream>
#include <vector>
using std::vector;

class Solution {
public:
    vector<double> convertTemperature(double);
};

int main() {
    Solution solution;
    double temp;

    std::cout << "Введите температуру в Цельсиях: ";
    std::cin >> temp;

    vector<double> result = solution.convertTemperature(temp);

    std::cout << "Температура в Кельвинах: " << result[0]
        << "\nТемпература в Фаренгейтах: " << result[1] << '\n';
    
    return 0;
}

vector<double> Solution::convertTemperature(double celsius) {
    const double kelvin_value = 273.15;
    const double fahren_value[]{1.80, 32.0};

    double kelvin = celsius + kelvin_value,
        fahrenheit = celsius * fahren_value[0] + fahren_value[1];

    return vector<double>{kelvin, fahrenheit};

}
