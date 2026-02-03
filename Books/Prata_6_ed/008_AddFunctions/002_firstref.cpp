// Page 371 - определение и использование ссылки
#include <iostream>
using namespace std;

int main() {
    int rats = 101;
    int& rodents = rats;

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    rodents++;

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    // Адреса в памяти одинаковые
    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    return 0;
}

