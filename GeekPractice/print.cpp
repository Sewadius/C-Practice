// Print alternate elements of an array
#include <iostream>
using std::cout;

void print(int[], int);

int main() {
    int n;
    cout << "Введите размер массива: ";
    std::cin >> n;

    int arr[n];
    cout << "Введите элементы через пробел: ";
    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];

    cout << "Результат вывода: ";
    print(arr, n);

    cout << '\n';
    
    return 0;
}

void print(int ar[], int n) {
    for (int i = 0; i < n; i += 2)
        cout << *(ar + i) << " ";
}
