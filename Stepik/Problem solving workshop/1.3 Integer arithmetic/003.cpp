#include <iostream>
using std::cout;

int main() {
    size_t apartment;
    std::cin >> apartment;

    if (apartment % 3 == 0)
        cout << apartment / 3;
    else
        cout << apartment / 3 + 1;
        
    return 0;
}
