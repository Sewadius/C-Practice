// break на примере цикла while
#include <iostream>

int main() {
    int i = 0;

    while (true) {
        std::cout << "Переменная i: " << i << std::endl;
        i++;
        if (i == 6) break;
    }

    return 0;
}
