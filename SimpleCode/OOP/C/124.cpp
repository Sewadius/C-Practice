// Перечисляемый тип enum
#include <iostream>
using std::cout;

class PC {
public:
    enum PCState {
        OFF, ON, SLEEP
    };

    PCState getState() { return _state; }
    void setState(PCState);
private:
    PCState _state;
};

enum Speed {
    MIN = 150,
    RECOMEND = 600,
    MAX = 800
};

int main() {
    PC pc;
    pc.setState(PC::PCState::ON);

    if (pc.getState() == PC::PCState::ON)
        cout << "PC работает!\n";

    switch (pc.getState()) {
        case PC::PCState::OFF:
            cout << "Выключен!\n"; break;
        case PC::PCState::ON:
            cout << "Работает!\n"; break;
        case PC::PCState::SLEEP:
            cout << "Спит!\n"; break;
    }

    Speed speed = Speed::MAX;
    cout << "Максимальная скорость: " << speed << '\n';

    if (speed > Speed::RECOMEND)
        cout << "Больше рекомендованной скорости!\n";
    
    return 0;
}

void PC::setState(PCState state) {
    this->_state = state;
}
