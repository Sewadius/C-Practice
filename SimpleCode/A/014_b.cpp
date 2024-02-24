// Цикл while, пример 2
#include <iostream>
using std::cout;

int main() {
    size_t var_1 = 0;

    while (var_1++ < 5)
        cout << "Значение var_1 postfix: " << var_1 << "\n";

    var_1 = 0;
    cout << std::endl;

    while (++var_1 < 5)
        cout << "Значение var_1 prefix: " << var_1 << "\n";

    return 0;
}
