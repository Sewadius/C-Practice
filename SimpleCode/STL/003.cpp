// List STL C++, библиотека стандартных шаблонов
#include <iostream>
#include <list>
using std::cout;
using std::list;

template <typename T>
void printList(const list<T>&);

int main() {
    list<int> myList = {15, 64, 979};
    list<int>::iterator it;

    myList.push_back(5);
    myList.push_front(151);

    it = myList.begin();
    
    printList(myList);

    myList.sort();
    cout << "После сортировки\n";
    printList(myList);

    myList.pop_front();
    cout << "Выполнено pop_front()\n";
    printList(myList);

    cout << "Количество элементов в списке: " <<
        myList.size() << '\n';

    myList.pop_back();
    cout << "Выполнено pop_back()\n";
    printList(myList);
    
    return 0;
}

template <typename T>
void printList(const list<T> &lst) {
    cout << "Элементы myList: ";
    for (auto i = lst.cbegin(); i != lst.cend(); ++i)
        cout << *i << ' ';

    cout << '\n';
}
