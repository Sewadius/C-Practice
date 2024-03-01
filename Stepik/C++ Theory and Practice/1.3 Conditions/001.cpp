// Odd or Even
#include <iostream>

int main() {
    int number;

    std::cout << "Enter integer number: ";
    std::cin >> number;

    std::cout << "Number is even: " << 
        (number % 2 == 0 ? "Yes\n\n" : "No\n\n");
    
    system("pause");
    return 0;
}
