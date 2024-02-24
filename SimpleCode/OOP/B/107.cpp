// Делегирующий конструктор
#include <iostream>
#include <string>
using std::string;

class Human {
public:
    Human(string);
    Human(string, int);
    Human(string, int, int);
    void getInfo() const;
private:
    string _name;
    int _age, _weight;
};

int main() {
    Human human1("Ivan", 25, 65);
    human1.getInfo();
    
    return 0;
}

Human::Human(string name) {
    this->_name = name;
    this->_age = 0;
    this->_weight = 0;
}

Human::Human(string name, int age) : Human(name) {
    this->_age = age;
}

Human::Human(string name, int age, int weight) : Human(name, age) {
    this->_weight = weight;
}

void Human::getInfo() const {
    std::cout << "Имя: " << _name << "\nВозраст: " << _age
        << "\nВес: " << _weight << '\n';
}
