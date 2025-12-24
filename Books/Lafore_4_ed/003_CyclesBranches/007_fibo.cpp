// Page 105 - числа Фибоначчи
#include <iostream>
using namespace std;

int main() {
    const unsigned long 
        LIMIT = 4294967295;
    
    unsigned long next = 0;         // Предпоследний член последовательности
    unsigned long last = 1;         // Последний член последовательности

    while (next < LIMIT / 2) {
        cout << last << ' ';
        long sum = next + last;
        next = last;
        last = sum;
    }

    cout << endl;
    return 0;
}

