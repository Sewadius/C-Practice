// Page 216 - использование цикла for для строки
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;

    cout << "Enter a word: ";
    cin >> word;

    // Отображение символов в обратном порядке
    for (int i = word.size() - 1; i >= 0; i--)
        cout << word[i];

    cout << "\nBye.\n";
    return 0;
}

