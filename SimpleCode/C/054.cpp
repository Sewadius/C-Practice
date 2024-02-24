// Использование nullptr
#include <iostream>
using std::cout;

int main() {
    int *pa = new int;
    *pa = 10;

    cout << *pa << "\n";
    delete pa;

    pa = nullptr;

    if (pa != nullptr)
        cout << pa << "\n";
    
    return 0;
}
