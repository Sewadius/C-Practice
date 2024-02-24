// Использование метода unique() для list
#include <iostream>
#include <list>
using std::cout;
using std::list;

int main() {
    list<int> myList = {99, 15, 15, 10, 0, 10, -33, -33};
    list<int>::iterator it = myList.begin();

    cout << "Элементы myList: ";

    for (; it != myList.end(); ++it)
        cout << *it << ' ';

    myList.unique();

    cout << "\nПосле использование unique(): ";

    it = myList.begin();

    for (; it != myList.end(); ++it)
        cout << *it << ' ';

    cout << '\n';
    
    return 0;
}
