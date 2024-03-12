#include <iostream>
#include <array>
using std::cout;

int main() {
    std::array<int, 10> numbers;
    int number;

    for (size_t i = 0; i < numbers.size(); i++)
        std::cin >> numbers[i];

    std::cin >> number;

    for (size_t i = 0; i < numbers.size(); i++)
        if ((i + 1) % number == 0) 
            cout << numbers[i] << ' ';
    
    return 0;
}
