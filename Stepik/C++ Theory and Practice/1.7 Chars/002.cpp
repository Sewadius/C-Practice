#include <iostream>
using std::cout;

int main() {
    char ch;
    int n;
    std::cin >> ch >> n;

    while (n) {
        ch++; n--;
    }

    cout << ch;
    return 0;
}
