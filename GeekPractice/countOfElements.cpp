// Count of smaller elements
#include <iostream>
using std::cout;

int countOfElements(int[], int, int);

int main() {
    int array[]{1, 2, 4, 5, 8, 10};
    int array_2[]{1, 2, 2, 2, 5, 7, 9};

    cout << countOfElements(array, 6, 9) << '\n';
    cout << countOfElements(array_2, 7, 2) << '\n';

    return 0;
}

int countOfElements(int arr[], int n, int x) {
    int sum = 0;

    for (int i = 0; i < n; i++)
        if (*(arr + i) <= x) ++sum;
    
    return sum;
}
