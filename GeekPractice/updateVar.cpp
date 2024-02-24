// C++ Pointers (Incrementing a variable)
#include <iostream>

void updateVar(int*);

int main() {
    int n = 0;
    std::cout << "До изменения: " << n << '\n';

    updateVar(&n);
    std::cout << "После изменения: " << n << '\n';
    
    return 0;
}

void updateVar(int *a) {
    *a += 10;
}
