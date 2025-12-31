// Page 318 - префиксная и постфиксная операции ++
#include <iostream>
using namespace std;

class Counter {
private:
    unsigned int count;
public:
    Counter() : count(0) {}
    Counter(int c) : count(c) {}
    unsigned int get_count() const { return count; }
    Counter& operator++ () { 
        ++count;
        return *this;
    }

    Counter operator++ (int) {
        return Counter(count++);
    }
};

int main() {
    Counter c1, c2;
    cout << "c1 = " << c1.get_count();              // 0
    cout << "\nc2 = " << c2.get_count() << endl;    // 0

    ++c1;           // Увеличиваем c1
    c2 = ++c1;      // c1 = 2, c2 = 2
    
    cout << "\nc1 = " << c1.get_count();            // 2
    cout << "\nc2 = " << c2.get_count() << endl;    // 2

    c2 = c1++;      // c1 = 3, c2 = 2

    cout << "\nc1 = " << c1.get_count();            // 3
    cout << "\nc2 = " << c2.get_count();            // 2

    cout << endl;
    return 0;
}
