#include "sum.h"
#include "MyClass.h"

int main() {
    int result = sum(2, 3);

    cout << "Результат: " << result << '\n';

    MyClass m;
    m.printMessage("Hello, world!");
    
    return 0;
}
