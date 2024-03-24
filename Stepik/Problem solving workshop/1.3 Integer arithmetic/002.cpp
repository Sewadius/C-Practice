#include <iostream>
using std::cout;

int main() {
    size_t seat;
    size_t result = 1;
    int counter = 0;
    std::cin >> seat;

    for (size_t i = 1; i <= seat; i++) {
        if (counter == 4) {
            ++result;
            counter = 0;
        }
        ++counter; 
    }

    cout << result;
}
