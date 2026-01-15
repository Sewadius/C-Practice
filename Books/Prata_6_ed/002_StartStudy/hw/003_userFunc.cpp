// Задание 3 - использование пользовательских функций
#include <iostream>
using std::cout;

void printMsg1();
void printMsg2();

int main() {
    // Первые две строки
    printMsg1(); printMsg1();

    // Последние две строки
    printMsg2(); printMsg2();
    
    return 0;
}

// Вывод первого сообщения
void printMsg1() 
    { cout << "Three blind mice\n"; }

// Вывод второго сообщения
void printMsg2() 
    { cout << "See how they run\n"; }

