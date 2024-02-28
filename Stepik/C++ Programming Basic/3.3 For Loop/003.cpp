// 3. Numbers in the middle
#include <iostream>
using std::cout;
using std::cin;

class Sum {
    public:
        Sum(int, int);
        int getResult();
    private:
        int _start, _end, _sum;
};

Sum::Sum(int a, int b) {
    this->_start = a;
    this->_end = b;
    this->_sum = 0;
}

int Sum::getResult() {
    for (int i = _start + 1; i < _end; i++)
        _sum += i;
    return _sum;
}

int main() {
    int a, b;

    cout << "Enter left integer border: ";
    cin >> a;

    cout << "Enter right integer border: ";
    cin >> b;

    Sum sum = Sum(a, b);
    cout << "\nThe result sum is: " << sum.getResult() << "\n\n";

    system("pause");
    return 0;
}
