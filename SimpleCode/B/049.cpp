// Возврат нескольких значений из функции
#include <iostream>
using std::cout;

void foo(int *pa, int *pb, int *pc) {
    (*pa) = 555;
    (*pb)++;
    (*pc) = -20;
}

int main() {
    int a = 0, b = 0, c = 1;
    cout << "a = " << a << ", b = " << b <<
        ", c = " << c << "\n";

    foo(&a, &b, &c);

    cout << "a = " << a << ", b = " << b <<
        ", c = " << c << "\n";

    return 0;
}
