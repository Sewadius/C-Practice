// Дружественный метод класса
#include <iostream>
#include <string>
using std::string;

class Apple;

class Human {
public:
    void takeApple(Apple&);
};

class Apple {
public:
    Apple(int, string);
private:
    int weight;
    string color;

friend void Human::takeApple(Apple&);
};

int main() {
    Apple apple(150, "Red");
    Human human;

    human.takeApple(apple);
    
    return 0;
}

Apple::Apple(int weight, string color) {
    this->weight = weight;
    this->color = color;
}

void Human::takeApple(Apple &apple) {
    std::cout << "takeApple " << apple.weight << " "
        << apple.color << '\n';
}
