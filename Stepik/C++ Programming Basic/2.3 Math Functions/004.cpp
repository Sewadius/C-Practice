// 4. Stepenator
#include <iostream>
using std::cout;
using std::cin;

const char* POSITION[] = {
    "Second", "Third", "Fourth", "Fifth"
};

const char* TEXT = " the power of this number is ";

class Stepenator {
    public:
        Stepenator(int);
        int nextNumber();
    private:
        int _number, _value;
};

Stepenator::Stepenator(int number) {
    this->_number = number;
    this->_value = number;
}

int Stepenator::nextNumber() {
    this->_value *= _number;
    return _value;
}

int main() {
    int number;
    cout << "Enter the integer number: ";
    cin >> number;

    Stepenator st(number);

    for (size_t i = 0; i < 4; i++)
        cout << POSITION[i] << TEXT << st.nextNumber() << '\n';

    cout << '\n';
    system("pause");
    return 0;
}
