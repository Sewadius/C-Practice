// Page 261 - использование if else
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Type, and I shall repeat.\n";
    cin.get(ch);

    while (ch != '.') {
        if (ch == '\n') cout << ch;
        else cout << ++ch;

        cin.get(ch);
    }

    cout << "\nPlease excuse slight confusion.\n";
    
    return 0;
}

