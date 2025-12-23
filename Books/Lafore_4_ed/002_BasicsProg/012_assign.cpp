// Page 80 - арифметические операции с присваиванием
#include <iostream>
using namespace std;

int main() {
    int ans = 27;

    ans += 10;
    cout << ans << ", ";    // 37

    ans -= 7;
    cout << ans << ", ";    // 30

    ans *= 2;
    cout << ans << ", ";    // 60

    ans /= 3;
    cout << ans << ", ";    // 20

    ans %= 3;
    cout << ans << endl;    // 2

    return 0;
}

