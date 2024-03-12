#include <iostream>
using std::cout;

int main() {
    size_t repeat, number;
    std::cin >> repeat >> number;

    for (size_t i = 0; i < repeat; i++)
        cout << number << ' ';
        
    return 0;
}
