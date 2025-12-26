// Page 169 - простая функция
#include <iostream>
using namespace std;

void starline();    // Объявление фукнции

int main() {
    starline();
    cout << "Тип данных     Диапазон\n";
    
    starline();

    cout << "char           -128...127\n";
    cout << "short          -32.768...32.767\n";
    cout << "int            системно-зависимый\n";
    cout << "long           -2.147.483.648...2.147.483.647\n";

    starline();

    return 0;
}

// Определение функции starline
void starline() {
    for (int j = 0; j < 45; ++j) cout << '*';
    cout << endl;
}

