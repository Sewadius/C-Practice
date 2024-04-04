#include <iostream>
using std::cout;
using std::cin;

int main() {
    int m, n;
    cin >> m >> n;
    if (m % n == 0)
        cout << "Частное " << m / n;
    else
        cout << m << " на " << n << " нацело не делится";
    return 0;
}
