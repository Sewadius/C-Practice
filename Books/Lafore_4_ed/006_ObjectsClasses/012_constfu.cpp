// Page 250 - применение константных методов
#include <iostream>
using namespace std;

class MyClass {
private:
    int alpha;
public:
    void nonFunc() { 
        cout << "Вызван неконстантный метод\n";
        alpha = 99; 
    }

    int conFunc() const { 
        cout << "Вызван константный метод\n";
        return alpha; 
    }
};

int main() {
    MyClass my;
    my.nonFunc();
    
    int value = my.conFunc(); 
    cout << "alpha = " << value << endl;

    return 0;
}

