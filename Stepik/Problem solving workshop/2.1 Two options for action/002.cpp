#include <iostream>
using std::cout;

const char* MAX = "максимальное значение ";
const char* MIN = "минимальное значение ";

int main() {
    float a, b;
    std::cin >> a >> b;

    if (a > b) {
        cout << MAX << a << '\n';
        cout << MIN << b;
        return 0;
    }

    cout << MAX << b << '\n';
    cout << MIN << a;

    return 0;
}
