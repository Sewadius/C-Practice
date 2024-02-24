// Пространства имён C++, namespace
#include <iostream>
using std::cout;

namespace firstN {
    void foo();
}

namespace secondN {
    void foo();
}

namespace thirdN {
    namespace secondN {
        void foo();
    }
}

int main() {
    firstN::foo();
    secondN::foo();
    thirdN::secondN::foo();
    
    return 0;
}

void firstN::foo() {
    cout << "Foo firstNamespace\n";
}

void secondN::foo() {
    cout << "Foo secondNamespace\n";
}

void thirdN::secondN::foo() {
    cout << "Foo thirdNamespace\n";
}
