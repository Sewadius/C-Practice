// 2. Distances
#include <iostream>
using std::cout;
using std::cin;

class Distance {
    public:
        Distance(int, int);
        int getResult() const;
    private:
        int _start, _end;
};

Distance::Distance(int start, int end) {
    this->_start = start; this->_end = end;
}

int Distance::getResult() const {
    return _end > _start ? _end - _start : _start - _end;
}

int main() {
    int start, end;

    cout << "Enter the start point: ";
    cin >> start;

    cout << "Enter the end point: ";
    cin >> end;

    Distance distance(start, end);
    cout << "\nThe distance is " << distance.getResult() << "\n\n";

    system("pause");
    return 0;
}
