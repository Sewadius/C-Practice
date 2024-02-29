// 7. Plagiarizing brat
#include <iostream>
#include <set>
#include <vector>

const size_t TOTAL = 13;
std::set<int> nums;
std::vector<int> duplicates;

int main() {
    int number;

    std::cout << "Enter 13 integer numbers: ";

    for (size_t i = 0; i < TOTAL; i++) {
        std::cin >> number;

        bool new_number = nums.find(number) == nums.end();

        if (new_number)                     // Новое число
            nums.insert(number);
        else                                // Дубликат
            duplicates.push_back(number);
    }

    std::cout << "Duplicates here " << duplicates.size() << "\n\n";

    system("pause");
    return 0;
}
