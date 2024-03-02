// Reverse order
#include <iostream>
using std::cout;

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    
    for (int i = 9; i >= 0; i--)
        cout << array[i] << ' ';
        
    return 0;
}