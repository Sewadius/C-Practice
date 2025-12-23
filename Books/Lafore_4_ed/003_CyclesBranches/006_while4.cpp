// Page 104 - возведение в 4-ю степень
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int pow = 1;
    int n = 1;

    while (n < 10) {
        cout << setw(2) << n;
        cout << setw(5) << pow << endl;

        ++n;
        pow = n * n * n * n;
    }

    return 0;
}
