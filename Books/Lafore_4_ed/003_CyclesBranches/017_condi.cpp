// Page 126 - печать символа 'x' каждые 8 позиций
#include <iostream>
using namespace std;

int main() {
    for (int j = 0; j < 80; j++) {
        char ch = j % 8 ? ' ' : 'x';
        cout << ch;
    }

    cout << endl;
    return 0;
}

