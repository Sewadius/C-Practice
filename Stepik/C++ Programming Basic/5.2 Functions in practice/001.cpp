// 1. Days of the month
#include <iostream>
using std::cout;

const size_t MONTHS[12] = {
    31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

size_t getDaysFromMonth(size_t);

int main() {
    size_t month;

    cout << "Enter the number of month: ";
    std::cin >> month;

    cout << "Days in month: " << getDaysFromMonth(month) << "\n\n";

    system("pause");
    return 0;
}

size_t getDaysFromMonth(size_t month) {
    return MONTHS[month - 1];
}
