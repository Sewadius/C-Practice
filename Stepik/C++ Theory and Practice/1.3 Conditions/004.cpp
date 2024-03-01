// Number select
#include <iostream>
using std::cout;

constexpr const char* RESULT[5] = {
    "Pch", "Pnch", "Och", "Onch", "0"
};

bool isPositive(int);
bool isEven(int);
void printResult(bool, bool);

int main() {
    int n; 
    
    cout << "Enter integer number: ";
    std::cin >> n;

    cout << "Result is: ";

    if (n == 0) {
        cout << RESULT[4] << "\n\n";
        system("pause");
        exit(0);
    }

    printResult(isPositive(n), isEven(n));
    system("pause");
    return 0;
}

bool isPositive(int n) {
    return n > 0;
}

bool isEven(int n) {
    return n % 2 == 0;
}

void printResult(bool positive, bool even) {
    size_t index;

    if (positive && even) index = 0;
    if (positive && !even) index = 1;
    if (!positive && even) index = 2;
    if (!positive && !even) index = 3;

    cout << RESULT[index] << "\n\n";
}
