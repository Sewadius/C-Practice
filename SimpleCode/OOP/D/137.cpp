// Цикл foreach C++, range-based циклы
#include <iostream>
#include <list>
using std::cout;
using std::list;

int main() {
    int arr[] = {5, 11, 94, 99, 44};

    cout << "Элементы коллекции: ";

    for (const int& element : arr)
        cout << element << ' ';

    cout << std::endl;

    list<int> myList = {1, 99, 4, 94, 799, 44, 6};

    cout << "Элементы myList: ";

    for (const int& el : myList)
        cout << el << ' ';

    cout << std::endl;

    return 0;
}
