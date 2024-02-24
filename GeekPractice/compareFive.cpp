// C++ if-else (Decision Making)
#include <iostream>
#include <string>
using std::string;

const int FIVE = 5;
const string gt = "Greater than 5",
    lt = "Less than 5", 
        eq = "Equal to 5";

string compareFive(int);

int main() {
    int n;

    std::cout << "Enter N: ";
    std::cin >> n;
    std::cout << compareFive(n) << '\n';
    
    return 0;
}

string compareFive(int n) {
    return (n > FIVE) ? gt : 
        (n == FIVE) ? eq : lt; 
}
