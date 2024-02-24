// Унарный оператор
#include <iostream>

int main() {
    int a = 5, b = -10;
    
    std::cout << "a = " << a << ", b = " << b << "\n";

    a = -a; b = -b;
    
    std::cout << "После изменения a = " << a 
        << ", b = " << b << "\n";

    return 0;
}
