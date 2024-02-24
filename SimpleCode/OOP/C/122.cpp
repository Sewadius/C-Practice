// Несколько блоков catch, обработка исключений
#include <iostream>
using std::cout;

void foo(int);

int main() {
    try {
        foo(0);
    }

    catch (std::exception &ex) {
        cout << "Блок 1, мы поймали " << ex.what() << '\n';
    }

    catch (const char *ex) {
        cout << "Блок 2, мы поймали " << ex << '\n';
    }

    catch (...) {
        cout << "Что-то пошло не так!\n";
    }
    
    return 0;
}

void foo(int value) {
    if (value < 0)
        throw std::runtime_error("Число меньше нуля!\n");
        
    if (value == 0)
        throw value;
}
