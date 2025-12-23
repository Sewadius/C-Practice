// Page 81 - инкрементирование
#include <iostream>
using std::cout, std::endl;

int main() {
    int count = 10;

    cout << "count = " << count << endl;        // вывод 10
    cout << "count = " << ++count << endl;      // вывод 11
    cout << "count = " << count << endl;        // вывод 11
    cout << "count = " << count++ << endl;      // вывод 11
    cout << "count = " << count << endl;        // вывод 12

    return 0;
}

