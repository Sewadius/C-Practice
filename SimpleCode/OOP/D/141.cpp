// Union, использование в C++
#include <iostream>
using std::cout;

union MyUnion {
    short int a;
    int b;
    float c;
};

void printUnion(const MyUnion&);

int main() {
    MyUnion my_union;

    my_union.a = 5;
    printUnion(my_union);

    my_union.b = 40000;
    printUnion(my_union);

    my_union.c = 43.54;
    printUnion(my_union);

    return 0;
}

void printUnion(const MyUnion& myUnion) {
    cout << "a = " << myUnion.a << ", b = " <<
        myUnion.b << " c = " << myUnion.c << '\n'; 
}