// 2. Explosive stopwatch
#include <iostream>
using std::cout;

const size_t
    START = 1, END = 13;

void printCounting();

int main() {
    printCounting();
    cout << "\n\n";

    system("pause");
    return 0;
}

void printCounting() {
    for (size_t i = START; i <= END; i++) {
        cout << i << '\n';
        if (i % 5 == 0) cout << "Beep!!\n";
    }
}
