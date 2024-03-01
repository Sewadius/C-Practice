// 3. Calendar day
#include <iostream>
using std::cout;

bool is_valid_date(size_t, size_t, size_t, size_t[]);
bool is_leap_year(size_t);

int main() {
    size_t months[12] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    size_t day, month, year;
    cout << "Enter day, month and year: ";
    std::cin >> day >> month >> year;
    
    cout << "Date is valid: ";
    cout << (is_valid_date(day, month, year, months) ? "YES\n'n" : "NO\n\n");

    system("pause");
    return 0;
}

bool is_valid_date(size_t day, size_t month, size_t year, size_t months[]) {
    is_leap_year(year) ? months[1] = 29 : months[1] = 28;

    if (month < 1 || month > 12)
        return false;
    if (day < 1 || day > months[month - 1])
        return false;
    return true;
}

bool is_leap_year(size_t year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
