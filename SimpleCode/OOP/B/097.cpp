// Агрегация и композиция
#include <iostream>
#include <string>
using std::string;

class Cap {
public:
    string getColor();
private:
    string color = "red";
};

class Human {
public:
    void think() {
        brain.think();
    }
    void inspectTheCap();
private:
    class Brain {
    public:
        void think() {
            std::cout << "Я думаю!\n";
        }
    };
    Brain brain;
    Cap cap;
};

class Model {
public:
    void inspectModel() {
        std::cout << "Кепка " << cap.getColor() << " цвета\n";
    }
private:
    Cap cap;
};

int main() {
    Human human;
    human.think();
    human.inspectTheCap();

    Model model;
    model.inspectModel();
    
    return 0;
}

string Cap::getColor() {
    return color;
}

void Human::inspectTheCap() {
    std::cout << "Моя кепка " << cap.getColor() << '\n';
}
