// Виртуальное наследование, ромбовидное наследование
#include <iostream>
#include <string>
using std::string;
using std::cout;

class Component {
public:
    Component(string);
    string companyName;
    string getCompanyName() const;
};

class GPU : public Component {
public:
    GPU(string);
};

class Memory : public Component {
public:
    Memory(string);
};

class GraphicCard : public GPU, public Memory {
public:
    GraphicCard(string, string);
};

int main() {
    GraphicCard graphicCard("Kingston", "NVidea");
    
    cout << graphicCard.GPU::getCompanyName() << '\n';
    cout << graphicCard.Memory::getCompanyName() << '\n';

    return 0;
}

Component::Component(string companyName) {
    cout << "Конструктор Component\n";
    this->companyName = companyName;
}

string Component::getCompanyName() const {
    return companyName;
}

GPU::GPU(string companyName) : Component(companyName) {
    cout << "Контструктор GPU\n";
}

Memory::Memory(string companyName) : Component(companyName) {
    cout << "Конструктор Memory\n";
}

GraphicCard::GraphicCard(string GPUCompanyName, string MemoryCompanyName) :
    GPU(GPUCompanyName), Memory(MemoryCompanyName) {
    cout << "Конструктор GraphicCard\n";
}
