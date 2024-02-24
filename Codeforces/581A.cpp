// A. Хипстер Вася - сложность 800
#include <iostream>

class Task {
public:
    Task(size_t, size_t);
    size_t differentPairs();
    size_t samePairs();
private:
    size_t _red, _blue;
};

int main() {
    size_t red, blue;
    std::cin >> red >> blue;

    Task task(red, blue);
    std::cout << task.differentPairs() << ' '
        << task.samePairs() << '\n';

    return 0;
}

Task::Task(size_t red, size_t blue) {
    this->_red = red;
    this->_blue = blue;
}

size_t Task::differentPairs() {
    size_t counter = 0;

    while (_red > 0 && _blue > 0) {
        _red--; _blue--; ++counter;
    }

    return counter;
}

size_t Task::samePairs() {
    size_t counter = 0;

    if (_red == 0)
        while (_blue > 1) {
            _blue -= 2; ++counter;
        } 
    else 
        while (_red > 1) {
            _red -= 2; ++ counter;
        }

    return counter;
}
