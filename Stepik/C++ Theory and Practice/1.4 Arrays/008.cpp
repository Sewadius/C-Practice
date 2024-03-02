/* The remainder of dividing the sum of 
    the array elements by the number A */
#include <iostream>
using std::cout;

constexpr size_t SIZE = 4;

int main() {
    int arr[SIZE];
    int a; std::cin >> a;
    int value, sum = 0;

    for (size_t i = 0; i < SIZE; i++) {
        std::cin >> value; 
        arr[i] = value;
        sum += arr[i];
    }

    cout << sum % a << '\n';
    return 0;
}
