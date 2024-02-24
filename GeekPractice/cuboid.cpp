// C++ Inheritance introduction
#include <iostream>
using std::cout;

class Cuboid {
public:
    virtual void display();
protected:
    int length, width, height; 
};

class CuboidVol : public Cuboid {
public:
    void read_input(int&, int&, int&);
    void display() override;
};

int main() {
    int testCases;
    int l, w, h;
    CuboidVol cuboidVol;

    cout << "Введите количество тестов: ";
    std::cin >> testCases;

    while (testCases--) {
        std::cin >> l >> w >> h;
        cuboidVol.read_input(l, w, h);
        cuboidVol.Cuboid::display();
        cuboidVol.display();
    }
    
    return 0;
}

void Cuboid::display() {
    cout << length << ' ' << width << ' ' << height << '\n';
}

void CuboidVol::read_input(int& l, int& w, int& h) {
    length = l; width = w; height = h;
}

void CuboidVol::display() {
    cout << length * width * height << '\n';
}
