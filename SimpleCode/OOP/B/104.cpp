// Абстрактный класс, чисто виртуальная функция
#include <iostream>
using std::cout;

class Weapon {
public:
    virtual void shoot() = 0;
    void foo() {
        cout << "foo()" << std::endl;
    }
};

class Gun : public Weapon {
public:
    void shoot() override;
};

class SubmachineGun : public Gun {
public:
    void shoot() override;
};

class Bazooka : public Weapon {
public:
    void shoot() override;
};

class Knife : public Weapon {
    void shoot() override;
};

class Player {
public:
    void shoot(Weapon*);
};

int main() {
    Bazooka bazooka;
    Knife knife;

    Player player;

    player.shoot(&bazooka);
    player.shoot(&knife);

    knife.foo();

    return 0;
}

void Gun::shoot() {
    cout << "BANG!/n";
}

void SubmachineGun::shoot() {
    cout << "BANG! BANG! BANG!\n";
}

void Bazooka::shoot() {
    cout << "BADABUB!\n";
}

void Knife::shoot() {
    cout << "Vjuuh!\n";
}

void Player::shoot(Weapon *weapon) {
    weapon->shoot();
}
