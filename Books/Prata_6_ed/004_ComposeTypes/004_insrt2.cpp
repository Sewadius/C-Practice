// Page 142 - чтение более одного слова
#include <iostream>
using namespace std;

const int AR_SIZE = 20;

int main() {
    char name[AR_SIZE];
    char dessert[AR_SIZE];

    cout << "Enter your name: ";
    cin.getline(name, AR_SIZE);     // Читать до символа новой строки

    cout << "Enter your favourite dessert: ";
    cin.getline(dessert, AR_SIZE);

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << endl;

    return 0;
}

