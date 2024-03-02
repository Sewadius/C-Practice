// An array of three integer elements
#include <iostream>
using std::cout;
using std::cin;

constexpr size_t SIZE = 3; 

int main() {
    int arr[SIZE];
    int number, even = 0;

    for (size_t i = 0; i < SIZE; i++) {
        cin >> number; 
        arr[i] = number;
        arr[i] % 2 == 0 ? even++ : even--;
    }

    cout << (even > 0 ? "Yes" : "No");
    return 0;
}
