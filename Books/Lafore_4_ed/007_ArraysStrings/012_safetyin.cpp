// Page 286 - избежание переполнения буфера
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MAX = 20;
    char str[MAX];

    cout << "Введите строку: ";
    cin >> setw(MAX) >> str;        // Ввод не более чем MAX символов
    cout << "Вы ввели: " << str << endl;
    
    return 0;
}

