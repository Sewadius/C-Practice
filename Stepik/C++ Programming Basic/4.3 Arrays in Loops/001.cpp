// 4. Police U-turn
#include <iostream>
#include <stack>
using std::cout;
using std::stack;

const size_t TOTAL = 18;
stack<float> numbers;

void fillNumbers();
void printNumbers();

int main() {
    fillNumbers();
    printNumbers();

    system("pause");
    return 0;
}

void fillNumbers() {
    float number;

    cout << "Enter 18 float numbers: ";

    for (size_t i = 0; i < TOTAL; i++) {
        std::cin >> number;
        numbers.push(number);
    }
}

void printNumbers() {
    cout << "Reversed: ";

    while (numbers.size()) {
        cout << numbers.top() << ' ';
        numbers.pop();
    }

    cout << "\n\n";
}
