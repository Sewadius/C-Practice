// for с итератором внутри
#include <iostream>

int main() {
    for (int i = 0; i < 5;) {
        std::cout << "Переменная i = " << i << "\n";
        i++; 
    }

    return 0;
}
