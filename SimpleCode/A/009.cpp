#include <iostream>

int main() {
    int a = 1;

    std::cout << "До изменения a = " << a << "\n";

    a = a + 1;
    std::cout << "После изменения a = " << a << "\n";

    a++;
    std::cout << "После инкремента a = " << a << "\n";

    a--;
    std::cout << "После декремента a = " << a << "\n";

    return 0;
}
