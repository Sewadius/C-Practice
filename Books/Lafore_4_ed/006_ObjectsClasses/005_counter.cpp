// Page 228 - счетчик в качестве объекта
#include <iostream>
using namespace std;

class Counter {
private:
    unsigned int count;

public:
    Counter() : count(0) {cout << "Конструктор\n"; }

    void inc_count() { count++; }
    int get_count() { return count; }
};

int main() {
    Counter c1, c2;

    cout << "c1 = " << c1.get_count() << ", ";
    cout << "c2 = " << c2.get_count() << endl;

    c1.inc_count();     // Увеличение счетчика 1
    c2.inc_count();     // Увеличение счетчика 2
    c2.inc_count();     // Увеличение счетчика 2

    cout << "\nПосле методов inc_count():" << endl;
    cout << "c1 = " << c1.get_count() << ", ";
    cout << "c2 = " << c2.get_count() << endl;

    return 0;
}

