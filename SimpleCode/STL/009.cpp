// set и multiset, ассоциативные контейнеры
#include <iostream>
#include <set>
using std::set;
using std::cout;

int main() {
    set<int> mySet;

    mySet.insert(5);
    mySet.insert(1);
    mySet.insert(12);
    mySet.insert(4);
    mySet.insert(-1);

    cout << "Элементы mySet: ";

    for (const int& el : mySet)
        cout << el << ' ';

    cout << "\nРазмер mySet: " << mySet.size() << " элементов\n";
    
    return 0;
}
