#include <iostream>
using std::cout;

int main() {
    int a = 3, b = 3;

    cout << (a == b) << " ";    // 1
    cout << !(a == b) << " ";   // 0
    cout << !(a != b) << " ";   // 1

    cout << "\n";

    return 0;
}
