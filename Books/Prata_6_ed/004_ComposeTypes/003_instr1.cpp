// Page 140 - чтение более одной строки
#include <iostream>
using namespace std;

const int AR_SIZE = 20;

int main() {
    char name[AR_SIZE];
    char dessert[AR_SIZE];

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your favourite dessert: ";
    cin >> dessert;

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << endl;

    return 0;
}

