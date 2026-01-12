// Page 288 - ввод строки с пробелами
#include <iostream>
using namespace std;

int main() {
    const int MAX = 80;
    char str[MAX];

    cout << "Введите строку: ";
    cin.get(str, MAX);

    cout << "Вы ввели: " << str << endl;
    
    return 0;
}

