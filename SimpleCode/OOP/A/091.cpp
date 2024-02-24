// Дружественные классы
#include <iostream>
#include <string>
using std::string;

class Apple;

class Human {
public:
    void takeApple(Apple&);
    void eatApple(Apple&);
};

class Apple {
public:
    Apple(int, string);
private:
    int weight;
    string color;

friend Human;
};

int main() {
    Apple apple(150, "Red");
    Human human;

    human.takeApple(apple);
    human.eatApple(apple);
    
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

void Human::eatApple(Apple &apple) {
    std::cout << "eatApple " << apple.weight << " "
        << apple.color << '\n';
}
