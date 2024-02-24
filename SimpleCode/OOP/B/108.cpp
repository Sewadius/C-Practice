// Вызов виртуального метода базового класса
#include <iostream>
#include <string>
using std::string;
using std::cout;

class Msg {
public:
    Msg(string);
    virtual string getMsg();
private:
    string msg;
};

class BracketsMsg : public Msg {
public:
    BracketsMsg(string);
    string getMsg() override;
};

class Printer {
public:
    void print(Msg*);
};

int main() {
    Msg m("Привет!");
    Printer p;

    BracketsMsg bmsg("Привет!");

    p.print(&m);
    p.print(&bmsg);
    
    return 0;
}

Msg::Msg(string msg) {
    this->msg = msg;
}

string Msg::getMsg() {
    return msg;
}

BracketsMsg::BracketsMsg(string msg) : Msg(msg) {
    
}

string BracketsMsg::getMsg() {
    return '[' + Msg::getMsg() + ']';
}

void Printer::print(Msg *msg) {
    cout << msg->getMsg() << '\n';
}
