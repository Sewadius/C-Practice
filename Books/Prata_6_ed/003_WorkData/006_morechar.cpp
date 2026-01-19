// Page 101 - сравнение типов char и int
#include <iostream>
using namespace std;

int main() {
    char ch = 'M';
    int i = ch;         // Сохраняет этот же код в int

    cout << "The ASCII code for " << ch << ": " << i << endl;

    // Использование cout.put() для отображения символа
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);

    // Отображение символьной константы
    cout.put('!');

    cout << endl << "Done\n"; 
    
    return 0;
}

