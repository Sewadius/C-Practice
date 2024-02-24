// Пример работы функции rand()
#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));
    
    int a = rand();

    std::cout << a << std::endl;

    return 0;
}

