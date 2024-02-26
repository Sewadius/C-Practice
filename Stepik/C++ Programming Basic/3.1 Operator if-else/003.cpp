// 3. A less primitive calculator
#include <iostream>
using std::cout;
using std::cin;

const char* 
    TEXT = "You can't divide by zero";

class Division {
    public:
        bool checkDivisor() const;
        Division(int, int);
        float div() const;
    private:
        int _divisible, _divisor;
};

Division::Division(int a, int b) {
    this->_divisible = a;
    this->_divisor = b;
}

bool Division::checkDivisor() const {
    return this->_divisor != 0;
}

float Division::div() const {
    return this->_divisible / (float)this->_divisor;
}

int main() {
    int a, b;

    cout << "Enter the divisible integer: ";
    cin >> a;

    cout << "Enter the divisor integer: ";
    cin >> b;

    Division division(a, b);

    if (division.checkDivisor()) {
        cout << a << " / " << b << " = " << division.div() << "\n\n";
        system("pause");
        exit(0);
    }

    cout << TEXT << "\n\n";
    system("pause");
    return 0;
}
