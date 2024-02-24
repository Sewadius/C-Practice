// Искользование ромбовидного наследования
#include <iostream>
using std::cout;

class Character {
public:
    Character();
    int getHP() const;
    void printHP() const;
    bool getDamage();
private:
    int _HP = 100;
};

class Orc : public virtual Character {
public:
    Orc();
};

class Warrior : public virtual Character {
public:
    Warrior();
};

class OrcWarrior : public Orc, public Warrior {
public:
    OrcWarrior();
};

int main() {
    OrcWarrior orcWarrior;

    orcWarrior.printHP();

    while (orcWarrior.getDamage())
        orcWarrior.printHP();
    
    return 0;
}

Character::Character() {
    cout << "Конструктор Character\n";
}

int Character::getHP() const {
    return _HP;
}

void Character::printHP() const {
    cout << "Текущее значение HP: " << getHP() << '\n';
}

bool Character::getDamage() {
    _HP -= 10;

    if (_HP == 0) {
        cout << "The character is dead!\n";
        return false;
    }

    return true;
}

Orc::Orc() {
    cout << "Конструктор Orc\n";
}

Warrior::Warrior() {
    cout << "Конструктор Warrior\n";
}

OrcWarrior::OrcWarrior() {
    cout << "Конструктор OrcWarrior\n";
}
