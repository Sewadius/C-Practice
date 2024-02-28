// 4. Large adder
#include <iostream>
using std::cout;

const size_t 
    TOTAL_NUMBERS = 30;

int countSum(int);

int main() {
    int number;

    int result = countSum(number);
    cout << "Sum is " << result << "\n\n";
    
    system("pause");
    return 0;
}

int countSum(int number) {
    int sum = 0;
    
    cout << "Enter 30 integers: ";

    for (size_t i = 0; i < TOTAL_NUMBERS; i++) {
        std::cin >> number;
        sum += number;
    }
    
    return sum;
}
