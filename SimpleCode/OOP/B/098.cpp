// Наследование в ООП
#include <iostream>
#include <string>
using std::string;

class Human {
public:
    string getName() { return name; }
    void setName(string);
private:
    string name = "Иван Иванович";
};

class Student : public Human {
public:
    string group;
    void learn() {
        std::cout << "Я учусь!\n";
    }
};

class ExtramuralStudent : public Student {
public:
    void learn() {
        std::cout << "Я учусь реже обычного студента!\n";
    }
};

class Professor : public Human {
public:
    string subject;
};

int main() {
    Student student;
    student.learn();
    std::cout << student.getName() << '\n';

    ExtramuralStudent extStud;
    extStud.learn();
    extStud.setName("Аристарх");
    std::cout << extStud.getName() << '\n';
    
    return 0;
}

void Human::setName(string name) {
    this->name = name;
}
