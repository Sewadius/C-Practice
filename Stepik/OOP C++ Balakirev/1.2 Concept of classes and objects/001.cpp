#include <iostream>

class Variable {
public:
    short var_sh;
    double var_d;
};

int main() {
    Variable* variable = new Variable;

    std::cout << variable->var_d << " " <<
        variable->var_d << '\n';
        
    return 0;
}
