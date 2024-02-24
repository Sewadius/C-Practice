/*  Выбор количества бросков игрального кубика
    Выводятся результы и считается сумма броков 
    Также задаётся количество граней */ 

#include <iostream>
#include <ctime>

class Dice {
public:
    Dice();
    int diceRoll() const;
    void setFacets(int);
    int getFacets() const;
private:
    int _facets;
};

int main() {
    Dice dice;
    int facets, tries, sum = 0;

    std::cout << "Введите количетво граней кубика: ";
    std::cin >> facets;

    dice.setFacets(facets);

    std::cout << "Введите количество бросков: ";
    std::cin >> tries;

    std::cout << "Результаты бросков: ";

    while (tries--) {
        int value = dice.diceRoll();
        std::cout << value << ' ';
        sum += value;
    }

    std::cout << "\nОбщая сумма бросков: " << sum << '\n';
    
    return 0;
}

Dice::Dice() {
    srand(time(NULL));
}

int Dice::diceRoll() const {
    return rand() % getFacets() + 1;
}

void Dice::setFacets(int facets) {
    this->_facets = facets;
}

int Dice::getFacets() const {
    return _facets;
}
