#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int
        first = n / 1000,
        second = n / 100 % 10,
        third = n / 10 % 10,
        fourth = n % 10;

    bool check = first + second == third + fourth;

    std::cout << "Сумма первых двух " << (check ? "" : "не ") << "равна сумме последних двух\n";

    return 0;
}
