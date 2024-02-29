// 6. Unique personality
#include <iostream>
#include <set>
using std::cout;
using std::set;

const size_t TOTAL = 13;
set<int> nums, duplicates;

int main() {
    int number;

    cout << "Enter 13 integers: ";

    for (size_t i = 0; i < TOTAL; i++) {
        std::cin >> number;

        bool new_number = nums.find(number) == nums.end() &&
            duplicates.find(number) == duplicates.end();
        
        bool exist_number = nums.find(number) != nums.end() &&
            duplicates.find(number) == duplicates.end();

        // Новое число и дублей не было
        if (new_number) nums.insert(number);
        
        // Число уже есть, удаляем из результата, добавляем в дубли
        if (exist_number) {
            nums.erase(number); duplicates.insert(number);
        }
    }

    cout << "Unique numbers here " << nums.size() << "\n\n";

    system("pause");
    return 0;
}
