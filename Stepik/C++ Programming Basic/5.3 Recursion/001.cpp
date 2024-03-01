// 1. Highest number
#include <iostream>
#include <vector>
#include <limits.h>
using std::cout;
using std::cin;
using std::vector;

class GetMax {
    public:
        GetMax(size_t);
        void fillNumbers();
        int getMax() const;
    private:
        vector<int> _numbers;
        size_t _size;
};

GetMax::GetMax(size_t size) {
    this->_size = size;
}

void GetMax::fillNumbers() {
    int number;
    cout << "Enter numbers in one line: ";

    for (size_t i = 0; i < _size; i++) {
        cin >> number; _numbers.push_back(number);
    }
}

int GetMax::getMax() const {
    int max = INT_MIN;

    for (const int& i : _numbers)
        if (i > max) max = i;

    return max;
}

int main() {
    size_t size;

    cout << "Enter the total number of items: ";
    cin >> size;

    GetMax getMax(size);
    getMax.fillNumbers();

    cout << "Maximum element is: " << getMax.getMax() << "\n\n";

    system("pause");
    return 0;
}

