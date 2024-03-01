// 5. It's a prime number
#include <iostream>
using std::cout;

bool is_prime(size_t);

int main() {
    size_t num;

    cout << "Enter the number: ";
    std::cin >> num;

    cout << "Is simple number? " << (is_prime(num) ? "YES\n\n" : "NO\n\n");

    system("pause");
    return 0;
}

bool is_prime(size_t number) {
    if (number == 1) return false;

    for (size_t i = 2; i < number; i++)
        if (number % i == 0) return false;
    
    return true;
}
