// Особенности цикла for
#include <iostream>
using std::cout;

int main() {
    size_t i = 0;

    for (; i < 5; i++)
        cout << "Значение i (цикл 1): " << i << "\n";

    cout << std::endl;

    for (; i > 0; i--)
        cout << "Значение i (цикл 2): " << i << "\n";

    return 0;
}
