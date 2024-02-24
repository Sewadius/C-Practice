// forward list stl C++
#include <iostream>
#include <forward_list>
using std::forward_list;
using std::cout;

int main() {
    forward_list<int> fl = {131, 94, 494};
    
    fl.push_front(1);
    fl.push_front(4);

    for (const int& el : fl)
        cout << el << ' ';

    cout << '\n';

    forward_list<int>::iterator it = fl.begin();
    cout << "Первый элемент: " << *it << '\n';
    cout << "Второй элемент: " << *(++it) << '\n';

    forward_list<int>::iterator it_2 = fl.begin();
    fl.insert_after(it_2, 9999);

    for (const int& el : fl)
        cout << el << ' ';

    cout << '\n';

    return 0;
}
