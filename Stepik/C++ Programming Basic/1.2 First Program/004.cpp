// 4.1 Street art. House on the wall
#include <iostream>
using std::cout;

const size_t LENGTH = 9;
const size_t BOTTOM = 7;

void printLine(size_t);
void printSpaces(size_t);

int main() {
    for (size_t i = 1; i <= LENGTH; i += 2)
        printLine(i);
    for (size_t i = 0; i < 2; i++)
        printLine(BOTTOM);
    
    getchar();
    return 0;
}

void printLine(size_t num_sharps) {
    size_t spaces_length = (LENGTH - num_sharps) / 2;
    
    printSpaces(spaces_length);
    for (size_t i = 0; i < num_sharps; i++)
        cout << '#';
    printSpaces(spaces_length);
    cout << '\n';
}

void printSpaces(size_t len) {
    for (size_t i = 0; i < len; i++)
        cout << ' ';
}
