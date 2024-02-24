// Использование метода reverse() для list
#include <iostream>
#include <list>
using std::cout;
using std::list;

int main() {
    list<int> myList = {1, 2, 3, 4, 5, 6};
    auto it = myList.begin();

    cout << "Элементы myList: ";

    while (it != myList.end()) {
        cout << *it << ' ';
        ++it;
    }

    myList.reverse();

    cout << "\nПосле метода reverse(): ";
    it = myList.begin();

    while (it != myList.end()) {
        cout << *it << ' ';
        ++it;
    }

    cout << '\n';
    
    return 0;
}
