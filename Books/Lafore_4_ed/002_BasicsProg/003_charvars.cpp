// Page 63 - символьные константы
#include <iostream>
using namespace std;

int main() {
    char charvar1 = 'A';
    char charvar2 = '\t';

    cout << "A: " << charvar1 << " (код " << 
        (int)charvar1 << ")" << endl;
    
    cout << "Tab: " << charvar2 << " (код " << 
        (int)charvar2 << ")" << endl;

    charvar1 = 'B';

    cout << "B: " << charvar1 << " (код " << 
        (int)charvar1 << ")" << endl;

    return 0;
}

