// Выражение if
#include <iostream>
using std::cout;

int main() {
    bool isRain;

    cout << "Идёт ли дождь? "; 
    std::cin >> isRain;

    if (isRain)
        cout << "Идёт дождь, нужен зонт!\n";
    else
        cout << "Дождя нет, зонт можно не брать\n";

    return 0;
}
