// Капитализация слова - сложность 800
#include <iostream>
#include <cctype>

const size_t LEN = 1000;

class Word {
public:
    void capitalize();
    void getWord();
    void printWord();
private:
    char _word[LEN];
};

int main() {
    Word w;
    w.getWord();
    w.capitalize();
    w.printWord();

    return 0;
}

void Word::capitalize() {
    _word[0] = toupper(_word[0]);
}

void Word::getWord() {
    std::cin >> _word;
}

void Word::printWord() {
    std::cout << _word << '\n';
}
