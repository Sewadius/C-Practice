#include <iostream>

int main()
{
    ushort seconds;
    std::cin >> seconds;

    ushort
        hours = seconds / 3600,
        minutes = (seconds - (hours * 3600)) / 60,
        s = seconds % 60;

    std::cout << hours << '\n'
              << minutes << '\n'
              << s << '\n';

    return 0;
}
