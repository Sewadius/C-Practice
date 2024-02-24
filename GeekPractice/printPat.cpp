// Print the pattern
#include <iostream>
using std::cout;

void printPat(int);

int main() {
    printPat(3);
    
    return 0;
}

void printPat(int n) {
    if (n == 0) return;
    int number = n;

    // Общее количество для вывода строк
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << number << ' ';
        number--;
    }
    cout << '\n';
    
}
