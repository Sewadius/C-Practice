// Page 22 - ввод чисел и строки символов
#include <iostream>
using namespace std;

int main() {
    int i;
    float f;
    char s[80];

    cout << "Введите целое, число с плавующей точкой и строку: ";
    cin >> i >> f >> s;

    cout << "Вот ваши данные: ";
    cout << i << ' ' << f << ' ' << s << '\n';
    
    return 0;
}

