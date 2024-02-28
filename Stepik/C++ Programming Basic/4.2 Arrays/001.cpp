#include <iostream>
#include <vector>

int main() {
    std::vector<size_t> vec = {
        0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89
    };

    for (auto i : vec) std::cout << i << ' ';

    std::cout << "\n\n";
    system("pause");
    return 0;
}
