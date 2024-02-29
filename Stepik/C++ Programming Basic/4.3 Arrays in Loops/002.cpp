// 5. Dynamic procedurally generated police U-turn
#include <iostream>
#include <stack>
using std::cout;
using std::stack;

class Reversed {
    public:
        Reversed(size_t);
        void fillNumbers();
        void printNumbers();
    private:
        stack<int> _numbers;
        size_t _total;
};

Reversed::Reversed(size_t total) {
    this->_total = total;
}

void Reversed::fillNumbers() {
    int value;
    cout << "Enter numbers: ";

    for (size_t i = 0; i < _total; i++) {
        std::cin >> value; _numbers.push(value);
    }  
}

void Reversed::printNumbers() {
    cout << "Reversed numbers: ";

    while (_numbers.size()) {
        cout << _numbers.top() << ' ';
        _numbers.pop();
    }
}

int main() {
    int total;

    cout << "Enter number of elements: ";
    std::cin >> total;

    Reversed reversed(total);
    reversed.fillNumbers();
    reversed.printNumbers();

    cout << "\n\n";
    system("pause");
    return 0;
}
