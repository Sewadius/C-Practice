// Препроцессор #define
#include <iostream>
#define PI 3.14
#define tab '\t'
#define begin {
#define end }

int main() {
    std::cout << PI << '\n';
    std::cout << "text" << tab << "text" << '\n';

    for (int i = 0; i < 5; i++)
    begin
        std::cout << i << " ";
    end

    std::cout << '\n';

    return 0;
}
