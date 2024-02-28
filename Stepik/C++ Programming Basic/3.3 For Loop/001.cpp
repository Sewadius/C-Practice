// 1. A thousand and one numbers
#include <iostream>
using std::cout;

const size_t 
    START = 20, END = 100;

void printNumbers(size_t);

int main() {
    printNumbers(START);
    cout << "\n\n";
    system("pause");
    return 0;
}

void printNumbers(size_t start) {
    for (size_t i = start; i <= END; i += 2)
        cout << i << ' ';
}
