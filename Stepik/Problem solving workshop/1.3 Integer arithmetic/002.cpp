#include <iostream>
using std::cout;

/*
1 2 3 4         0 0 0 1
5 6 7 8         1 1 1 2
9 10 11 12      2 2 2 3
*/

int main() {
    int seat;
    std::cin >> seat;
    cout << (seat % 4) ? seat / 4 + 1 : seat / 4;
    return 0;
}
