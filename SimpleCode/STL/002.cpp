// Итераторы STL, библиотека стандартных шаблонов
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
    int arr[] = {2, 6, 9};

    cout << "Второй элемент массива arr[1]: " << arr[1] << '\n';
    cout << "Второй элемент массива *(arr + 1): " << *(arr + 1) << '\n';

    vector<int> myVector = {1, 9, 44, 442, 676, 78};
    cout << "Второй элемент myVector: " << myVector[1] << '\n';

    vector<int>::iterator it;

    it = myVector.begin();
    cout << "myVector.begin(): " << *it << '\n';

    *it = 500;
    cout << "После замены значения через итератор: " << *it << '\n';

    ++it;
    cout << "После сдвига итератора на второй элемент: " << *it << '\n';

    cout << "Элементы myVector: ";

    for (auto i = myVector.begin(); i < myVector.end(); ++i)
        cout << *i << ' ';

    cout << "\nЭлементы myVector через константный итератор: ";

    for (vector<int>::const_iterator i = myVector.cbegin(); 
            i != myVector.cend(); ++i)
        cout << *i << ' ';

    cout << "\nВывод элементов в обратном порядке: ";

    for (vector<int>::reverse_iterator i = myVector.rbegin();
            i != myVector.rend(); ++i)
        cout << *i << ' ';

    cout << "\nСдвиг через функцию advance(): ";

    it = myVector.begin();
    std::advance(it, 2);

    cout << *it << '\n';

    return 0;
}
