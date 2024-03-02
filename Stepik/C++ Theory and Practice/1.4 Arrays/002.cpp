// Display array elements one by one
#include <iostream>
using std::cout;

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    
    for (size_t i = 0; i < 10; i += 2)
        cout << array[i] << ' ';
        
    return 0;
}
