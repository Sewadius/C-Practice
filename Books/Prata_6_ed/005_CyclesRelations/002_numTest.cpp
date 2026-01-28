// Page 208 - использование числовой проверки в цикле
#include <iostream>
using namespace std;

int main() {
    cout << "Enter the starting countdown value: ";

    int limit, i;
    cin >> limit;

    // Цикл завершается, когда i равно 0
    for (i = limit; i; i--)
        cout << "i = " << i << '\n';
    
    cout << "Done now that i = " << i << '\n';

    return 0;
}

