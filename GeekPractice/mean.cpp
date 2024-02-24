// Mean
#include <iostream>
using std::cout;
using std::cin;

class Solution {
public:
    int mean(int, int[]);
};

int main() {
    Solution s;
    int n;

    cout << "Введите число элементов: ";
    cin >> n;

    int arr[n];
    cout << "Введите элементы через пробел: ";

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Среднее значение: " << s.mean(n, arr) << '\n';
    
    return 0;
}

int Solution::mean(int N, int A[]) {
    int sum = 0;

    for (int i = 0; i < N; ++i)
        sum += *(A + i);

    return sum / N;
}
