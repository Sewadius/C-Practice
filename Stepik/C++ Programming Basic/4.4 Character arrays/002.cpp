// 2. Words backwards
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

class Backwords {
    public:
        Backwords(string);
        void printBackword();
    private:
        string _word;
};

Backwords::Backwords(string word) {
    this->_word = word;
}

void Backwords::printBackword() {
    cout << "Reversed word is: ";

    while (!_word.empty()) {
        cout << _word.back();
        _word.pop_back();
    }

    cout << "\n\n";
}

int main() {
    string word;

    cout << "Enter the word: ";
    cin >> word;

    Backwords backwors(word);
    backwors.printBackword();

    system("pause");
    return 0;
}
