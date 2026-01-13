// Page 288 - ввод нескольких строк
#include <iostream>
using namespace std;

const int MAX = 2000;
char str[MAX];

int main() {
    cout << "Введите строку: ";
    cin.get(str, MAX, '$');
    cout << "Вы ввели: " << str << endl;

    return 0;
}

