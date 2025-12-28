// Page 247 - пример использования статических полей
#include <iostream>
using namespace std;

class Foo {
private:
    static int count;
public:
    Foo() { ++count; }
    int getCount() const { return count; }
};

int Foo::count = 0;

int main() {
    Foo f1, f2, f3;

    cout << "Число объектов: " << f1.getCount() << endl;
    cout << "Число объектов: " << f2.getCount() << endl;
    cout << "Число объектов: " << f3.getCount() << endl;

    return 0;
}

