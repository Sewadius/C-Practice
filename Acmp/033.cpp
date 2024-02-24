// Задача №33. Два бандита
#include <iostream>
using std::cout;

class Task {
public:
    Task(size_t, size_t);
    void printResult() const;
private:
    size_t _value1, _value2;
};

int main() {
    size_t value1, value2;
    std::cin >> value1 >> value2;

    Task task(value1, value2);
    task.printResult();
    
    return 0;
}

Task::Task(size_t val1, size_t val2) {
    this->_value1 = val1;
    this->_value2 = val2;
}

void Task::printResult() const {
    cout << _value2 - 1 << ' ' << _value1 - 1 << '\n';
}
