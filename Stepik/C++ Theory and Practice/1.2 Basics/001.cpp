// Hello
#include <iostream>
#include <string>
using std::cout;
using std::string;

class Hello {
    public:
        Hello(string);
        void printHello() const;
    private:
        string _data;
};

Hello::Hello(string value) {
    this->_data = value;
}

void Hello::printHello() const {
    cout << _data << '\n';
}

int main() {
    string value = "Hello";

    Hello hello = Hello(value);
    hello.printHello();

    cout << '\n';

    system("pause");
    return 0;
}
