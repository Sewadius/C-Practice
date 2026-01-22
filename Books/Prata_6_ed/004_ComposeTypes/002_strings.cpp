// Page 139 - сохранение строк в массиве
#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 15;

int main() {
    char name1[SIZE];                   // Пустой массив
    char name2[SIZE] = "C++owboy";      // Инициализация массива

    cout << "Howdy! I'm " << name2;
    cout << "! What's your name?\n";

    cin >> name1;
    cout << "Well, " << name1 << ", your name has "
        << strlen(name1) << " letters and is stored\n";

    cout << "In an array of " << sizeof(name1) << " bytes.\n";
    cout << "Your initial is " << name1[0] << ".\n";

    name2[3] = '\0';        // Установка нулевого символа
    
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;

    return 0;
}

