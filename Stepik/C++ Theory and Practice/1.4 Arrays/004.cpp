// Sum of elements
#include <iostream>
using std::cout;

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    size_t sum = 0;

    for (int i = 0; i < 10; i++)
        sum += array[i];
        
    cout << sum << '\n';
    return 0;
}
