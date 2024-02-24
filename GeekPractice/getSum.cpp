// Arrays (Sum of array)
#include <iostream>
#include <numeric>

int getSum(int[], int);

int main() {
    int arr[] = {2, 5, 7, 8, 2, 6, 9};

    std::cout << "The array sum is: " 
        << getSum(arr, 7) << '\n'; 
    
    return 0;
}

int getSum(int a[], int n) {
    int sum = 0;
    sum = std::accumulate(a, a + n, sum);
    return sum;
}
