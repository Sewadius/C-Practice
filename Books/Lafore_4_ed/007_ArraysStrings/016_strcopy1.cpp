// Page 289 - копирование строки с использованием цикла
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[] = "Маленькой елочке холодно зимой,";
    const int MAX = 80;

    char str2[MAX];

    for (size_t i = 0; i < strlen(str1); ++i)
        str2[i] = str1[i];

    str2[strlen(str1)] = '\0';      // Завершаем строку нулём
    cout << str2 << endl;
    
    return 0;
}

