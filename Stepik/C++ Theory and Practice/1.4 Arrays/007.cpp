// An array of five integer elements
#include <iostream>
using std::cout;

constexpr size_t SIZE = 5;

int main() {
    int arr[SIZE];
    int value, sum = 0;

    for (size_t i = 0; i < SIZE; i++) {
        std::cin >> value;
        arr[i] = value;
        sum += arr[i];
    }

    cout << (sum % 2 == 0 ? "Yes" : "No");
    return 0;
}
