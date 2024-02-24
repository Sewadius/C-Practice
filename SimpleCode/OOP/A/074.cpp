// Методы класса
#include <iostream>
#include <string>
using std::string;
using std::cout;

class Human {
public:
    int age;
    int weight;
    string name;
    void print();
};

int main() {
    Human firstHuman;
    firstHuman.age = 30;
    firstHuman.name = "Ivanov Ivan";
    firstHuman.weight = 80;

    firstHuman.print();

    Human secondHuman;
    secondHuman.print();
    
    return 0;
}

void Human::print() {
    cout << "Имя - " << name << "\nВес - " << weight <<
        "\nВозраст - " << age << "\n\n";
}
