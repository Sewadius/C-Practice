// Page 71 - применение манипулятора setw
#include <iostream>
#include <iomanip>      // Для использования setw
using namespace std;

int main() {
    const long 
        POP1 = 4789426, 
        POP2 = 274124, 
        POP3 = 9761;

    // Заголовок
    cout << left << setw(12) << "Город  " << left << setw(15) << "Население" << endl;

    // Данные
    cout << left << setw(12) << "Москва  " << left << setw(15) << POP1 << endl;
    cout << left << setw(12) << "Киров  " << left << setw(15) << POP2 << endl;
    cout << left << setw(12) << "Угрюмовка  " << left << setw(15) << POP3 << endl;

    return 0;
}
