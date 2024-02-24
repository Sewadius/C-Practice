// break на примере цикла while
#include <iostream>

int main() {
    std::cout << "Переменная i: ";

    int i = 0;

    while (true) {
        std::cout << i << ' ';
        ++i;
        if (i == 6) break;
    }

    std::cout << '\n';
    
    return 0;
}
