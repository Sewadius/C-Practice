// Виртуальные методы класса
#include <iostream>
using std::cout;

class Gun {
public:
    virtual void shoot();
};

class SubmachineGun : public Gun {
public:
    void shoot() override;
};

class Bazooka : public Gun {
public:
    void shoot() override;
};

class Player {
public:
    void shoot(Gun*);
};

int main() {
    Gun gun;
    gun.shoot();

    SubmachineGun submachineGun;
    submachineGun.shoot();

    Gun *weapon = &submachineGun;
    weapon->shoot();

    Bazooka bazooka;

    cout << "\nОбработка событий для игрока\n";

    Player player;
    player.shoot(&gun);
    player.shoot(&submachineGun);
    player.shoot(&bazooka);
    
    return 0;
}

void Gun::shoot() {
    cout << "Bang!\n";
}

void SubmachineGun::shoot() {
    cout << "Bang! Bang! Bang!\n";
}

void Bazooka::shoot() {
    cout << "BADABUB!\n";
}

void Player::shoot(Gun *gun) {
    gun->shoot();
}
