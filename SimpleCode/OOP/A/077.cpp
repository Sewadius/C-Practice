// Инкапсуляция ООП пример
#include <iostream>
using std::cout;

class CoffeeGrinder {
public:
    void start();
private:
    bool checkVoltage() {
        return true;
    }
};

int main() {
    CoffeeGrinder a;

    a.start();
    
    return 0;
}

void CoffeeGrinder::start() {
    bool voltageIsNormal = checkVoltage();

    cout << (voltageIsNormal ? "Vjuuuh!\n" : "Beep beep\n");
}
