// Задание 1 - класс Int
#include <iostream>
using namespace std;

class Int {
private:
    int value;
public:
    Int() : value(0) {}
    Int(int v): value(v) {}
    void show() const { cout << value; }

    Int add(const Int&) const;
};

Int Int::add(const Int& other) const {
    return Int(value + other.value);
}

int main() {
    Int i1, i2(15), i3(-27);
    i1 = i2.add(i3);

    cout << "Результат сложения: ";
    i1.show();      // -> -12
    cout << endl;

    return 0;
}

