// set, поиск элемента
#include <iostream>
#include <set>
using std::set;
using std::cout;

void printSet(const set<int>&);

int main() {
    set<int> mySet = {5, 45, 35, 11, 86};
    int number;
    
    printSet(mySet);

    cout << "Введите число для поиска: ";
    std::cin >> number;

    set<int>::iterator it = mySet.find(number);

    cout << (it == mySet.end() ? "Такого числа нет!\n" :
        "Число есть в mySet!\n");

    // Удаление найденного числа из mySet
    if (it != mySet.end()) {
        mySet.erase(number);
        cout << "Число " << number << " было удалено!\n";
        printSet(mySet);
    }
    
    return 0;
}

void printSet(const set<int>& s) {
    cout << "mySet: ";
    for (const int& el : s)
        cout << el << ' ';

    cout << '\n';
}
