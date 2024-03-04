#include <iostream>
using std::cout;

int main() {
    char ch1, ch2;
    std::cin >> ch1 >> ch2;

    int n = int(ch1) + int(ch2);
    cout << char(n);
    
    return 0;
}
