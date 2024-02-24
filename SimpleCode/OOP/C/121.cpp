// Генерация исключений throw, пример
#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::exception;

void foo(int);
void foo_2(int);
void foo_3(int);

int main() {
    try {
        foo(55);
        foo(20);
        foo_2(1);
        foo_3(-10);
    }

    catch (const int ex) {
        cout << "Мы поймали " << ex << std::endl;
    }

    catch (const char *ex) {
        cout << "Мы поймали: " << ex << '\n';
    }

    catch (const exception& ex) {
        cout << ex.what() << '\n';
    }
    
    return 0;
}

void foo(int value) {
    if (value < 0)
        throw value;

    cout << "Переменная = " << value << '\n';
}

void foo_2(int value) {
    if (value < 0)
        throw "Число меньше нуля!";

     cout << "Переменная = " << value << '\n';
}

void foo_3(int value) {
    if (value < 0)
        throw std::runtime_error("Число меньше нуля!");

    cout << "Переменная = " << value << '\n';
}
