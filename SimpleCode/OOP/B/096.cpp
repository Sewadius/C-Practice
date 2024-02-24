// Массив объектов класса
#include <iostream>
#include <string>
using std::string;
using std::to_string;

class Pixel {
public:
    Pixel(){ r = g = b = 0; }
    Pixel(int, int, int);
    string getInfo() const;
private:
    int r, g, b;
};

int main() {
    const int LENGTH = 5;
    Pixel arr[LENGTH];

    std::cout << arr[0].getInfo();

    arr[1] = Pixel(11, 159, 222);
    std::cout << arr[1].getInfo();

    Pixel *array = new Pixel[LENGTH];
    array[0] = Pixel(12, 109, 8);

    std::cout << array[0].getInfo();

    delete[] array;
    
    return 0;
}

Pixel::Pixel(int r, int g, int b) {
    this->r = r;
    this->g = g;
    this->b = b;
}

string Pixel::getInfo() const {
    return "Pixel: r = " + to_string(r) + ", g = " + to_string(g) +
        ", b = " + to_string(b) + '\n';
}
