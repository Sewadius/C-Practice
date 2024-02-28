// 3. Fibonacci Minute
#include <iostream>
using std::cout;

const size_t TOTAL = 30;

void printNumbers();

int main() {
    printNumbers();

    system("pause");
    return 0;
}

void printNumbers() {
    uint32_t first = 0, second = 1, next = 1;

    cout << first << ' ';

    for (size_t i = 1; i < TOTAL; i++) {
        cout << next << ' ';

        next = first + second;
        first = second;
        second = next;
    }

    cout << "\n\n";
}
