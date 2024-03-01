// Float in range
#include <iostream>
using std::cout;

int main() {
    float num;

    cout << "Enter float number: ";
    std::cin >> num;

    cout << "In range (-10, 10): " << 
        (num > -10 && num < 10 ? "Yes\n\n" : "No\n\n");

    system("pause");
    return 0;
}
