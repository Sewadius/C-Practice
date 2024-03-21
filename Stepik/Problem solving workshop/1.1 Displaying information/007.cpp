#include <iostream>
using std::cout;
using std::cin;

int main() {
    int i;
    cin >> i;
    cout << "Следующее за числом " << i << " число - " << i + 1 << '\n';
    cout << "Для числа " << i << " предыдущее число - " << i - 1;
    return 0;
}
