// Задача №106. Монетки
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

class Task {
public:
    void addStatus(bool);
    size_t getAnswer() const;
private:
    vector<bool> _coins_result;
};

int main() {
    Task task;
    int coins;
    bool status;

    std::cin >> coins;

    while (coins--) {
        std::cin >> status;
        task.addStatus(status);
    }

    cout << task.getAnswer() << '\n';
    
    return 0;
}

void Task::addStatus(bool status) {
    _coins_result.push_back(status);
}

size_t Task::getAnswer() const {
    size_t eagle = 0, tails = 0;

    for (const bool& b : _coins_result) {
        if (b) ++eagle;
        else ++tails;
    }

    return (eagle < tails ? eagle : tails);
}
