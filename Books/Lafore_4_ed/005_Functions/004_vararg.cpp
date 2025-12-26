// Page 175 - передача переменных в функцию
#include <iostream>
using namespace std;

void repchar(char, int);

int main() {
    char myChar;
    int k;

    cout << "Введите символ: "; 
    cin >> myChar;
    
    cout << "Введите число повторений символа: ";
    cin >> k;

    repchar(myChar, k);
    return 0;
}

void repchar(char ch, int n) {
    for (int j = 0; j < n; ++j) cout << ch;
    cout << endl;
}

