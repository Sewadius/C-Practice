// multiset, ассоциативные контейнеры
#include <iostream>
#include <set>
using std::multiset;
using std::cout;

int main() {
    multiset<int> myMultiset = {1, 16, 44, 53, 1, 16};

    for (const int& i : myMultiset)
        cout << i << ' ';

    cout << '\n';

    auto it1 = myMultiset.lower_bound(1);
    auto it2 = myMultiset.upper_bound(1);

    cout << "lower_bound(1): " << *it1 << '\n';
    cout << "upper_bound(1): " << *it2 << '\n';
    
    return 0;
}
