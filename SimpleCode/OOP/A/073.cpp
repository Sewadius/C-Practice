// Что такое класс, объект класса
#include <iostream>
#include <string>
using std::string;

class Human {
public:
    int age;
    string name;
    int weight;
};

int main() {
    Human firstHuman;

    firstHuman.age = 30;
    firstHuman.name = "Ivan";
    firstHuman.weight = 80;

    std::cout << "Возраст: " << firstHuman.age << '\n';
    std::cout << "Имя: " << firstHuman.name << '\n';
    std::cout << "Вес: " << firstHuman.weight << '\n';

    std::cout << "Размер класса: " << sizeof(Human) << " байт\n";
    
    return 0;
}
