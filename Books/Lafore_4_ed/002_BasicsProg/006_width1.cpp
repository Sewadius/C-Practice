// Page 71 - демонстрирует необходимость применения setw
#include <iostream>
using namespace std;

int main() {
    const long 
        POP1 = 4789426, 
        POP2 = 274124, 
        POP3 = 9761;

    cout << "Город " << "Население" << endl;
    cout << "Москва " << POP1 << endl;
    cout << "Киров " << POP2 << endl;
    cout << "Угрюмовка " << POP3 << endl;

    return 0;
}

