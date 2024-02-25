// 3. Family relations in the console
#include <iostream>
using std::cout;

void printSpaces(uint16_t);

const uint16_t 
    NUM_SPACES_1 = 4, 
    NUM_SPACES_2 = 9;

int main() {
    cout << "Vitya -\n";
  
    printSpaces(NUM_SPACES_1);
    cout << "is Tolin's\n";
  
    printSpaces(NUM_SPACES_2);
    cout << "brother\n";

    getchar();
    return 0;
}

void printSpaces(uint16_t n) {
    for (auto i = 0; i < n; i++)
        cout << ' ';
}

