// Sum of Array Elements
#include <iostream>

int sumElement(int[], int);

int main() {
    int array[] = {1, 2, 3};

    std::cout << sumElement(array, 3) << '\n';
    
    return 0;
}

int sumElement(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += *(arr + i);

    return sum;
}
