// Page 193 - перегрузка функций
#include <iostream>
using namespace std;

void repchar();
void repchar(char);
void repchar(char, int);

int main() {
    repchar();
    repchar('=');
    repchar('+', 30);
    
    return 0;
}

// Выводит на экран 45 символов '*'
void repchar() {
    for (int i = 0; i < 45; ++i) cout << '*';
    cout << endl;
}

// Выводит 45 заданных символов
void repchar(char ch) {
    for (int i = 0; i < 45; ++i) cout << ch;
    cout << endl;
}

// Выводит заданный символ заданное число раз
void repchar(char ch, int n) {
    for (int i = 0; i < n; ++i) cout << ch;
    cout << endl;
}

