// Page 144 - чтение более одного слова с помощью get() и get()
#include <iostream>
using namespace std;

const int AR_SIZE = 20;

int main() {
    char name[AR_SIZE];
    char dessert[AR_SIZE];

    cout << "Enter your name: ";
    cin.get(name, AR_SIZE).get();    

    cout << "Enter your favourite dessert: ";
    cin.get(dessert, AR_SIZE).get();

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << endl;

    return 0;
}

