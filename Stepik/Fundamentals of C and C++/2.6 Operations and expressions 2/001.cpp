#include <iostream>

int main()
{
    const int INITIAL_SALARY = 100;
    unsigned short totalDeals, result;

    std::cin >> totalDeals;
    result = INITIAL_SALARY + totalDeals * 0.05;

    std::cout << result << '\n';
    return 0;
}
