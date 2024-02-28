// 1. Stepenator 3000
#include <iostream>
using std::cout;

const char* TEXT = "-th power is ";

class Stepenator {
    public:
        Stepenator(int, size_t);
        void getNextPower();
        static size_t counter;
        void printResult();
    private:
        int _number, _value;
        size_t _num_of_powers;
};

size_t Stepenator::counter = 2;

Stepenator::Stepenator(int number, size_t powers) {
    this->_number = number;
    this->_value = number * number;
    this->_num_of_powers = powers;
}

void Stepenator::getNextPower() {
    _value *= _number;
}

void Stepenator::printResult() {
    for (size_t i = 1; i < _num_of_powers; i++) {
        cout << _number << " in " << counter << TEXT << _value << '\n';
        counter++;
        getNextPower();
    }
}

int main() {
    int number;
    size_t num_powers;

    cout << "Enter an integer number: ";
    std::cin >> number;

    cout << "Enter power number: ";
    std::cin >> num_powers;

    cout << '\n';

    Stepenator st = Stepenator(number, num_powers);
    st.printResult();

    cout << '\n';

    system("pause");
    return 0;
}
