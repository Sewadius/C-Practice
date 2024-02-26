// 1. Week days
#include <iostream>
using std::cout;

const char* DAYS[] = {
    "Monday", 
    "Tuesday", 
    "Wednesday", 
    "Thursday", 
    "Friday", 
    "Saturday", 
    "Sunday"
};

const char* TEXT = " - day week is ";

void printWeekDay(int);

int main() {
    int day;

    cout << "Enter the week's day number: ";
    std::cin >> day;
    printWeekDay(day);

    system("pause");
    return 0;
}

void printWeekDay(int day) {
    cout << day << TEXT << DAYS[day - 1] << '\n' << '\n';
}
