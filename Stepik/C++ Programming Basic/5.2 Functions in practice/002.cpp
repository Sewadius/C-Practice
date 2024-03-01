// 2. Leap year
#include <iostream>
using std::cout;

bool is_leap_year(size_t);

int main() {
    size_t year;

    cout << "Enter year: ";
    std::cin >> year;

    cout << "Is leap year: " << (is_leap_year(year) ? "YES\n\n" : "NO\n\n");

    system("pause");
    return 0;
}

bool is_leap_year(size_t year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
