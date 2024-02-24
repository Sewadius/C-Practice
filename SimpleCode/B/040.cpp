// Перегрузка функций
#include <iostream>

int sum(int, int);
int sum(int, int, int);
double sum(double, double);

int main() {
    std::cout << sum(5, 6) << "\n";
    std::cout << sum(10, -2, -4) << "\n";
    std::cout << sum(1.1, -0.9) << "\n";

    return 0;
}

int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

double sum(double a, double b) {
    return a + b;
}
