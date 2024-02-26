// 4.2 Street art. Christmas tree to every home
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;
using std::vector;

const size_t LENGTH = 7;

void printLine(size_t);
void printSpaces(size_t);
void printString(string);

int main() {
    for (size_t i = 1; i <= LENGTH; i += 2)
        printLine(i);

    vector<string> strings = {"@ @", "&&&"};

    for (const string s : strings)
        printString(s);
    
    getchar();
    return 0;
}

void printLine(size_t length) {
    size_t spaces_length = (LENGTH - length) / 2;

    printSpaces(spaces_length);
    for (size_t i = 0; i < length; i++)
        cout << '#';
    printSpaces(spaces_length);
    cout << '\n';
}

void printSpaces(size_t length) {
    for (size_t i = 0; i < length; i++)
        cout << ' ';
}

void printString(string str) {
    const size_t SPACES_LENGTH = 2;

    printSpaces(SPACES_LENGTH);
    cout << str;
    printSpaces(SPACES_LENGTH);
    cout << '\n';
}
