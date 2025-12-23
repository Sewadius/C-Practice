// Page 98 - кубы целых числе от 1 до 10
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    for (int n = 1; n <= 10; n++) {
        cout << setw(4) << n;
        int cube = n * n * n;
        cout << setw(6) << cube << endl;
    }

    return 0;
}

