// Вложенные классы, внутренние классы, inner class
#include <iostream>
#include <string>
using std::string;
using std::to_string;

class Pixel {
public:
    Pixel(int, int, int);
    string getInfo() const;
private:
    int r, g, b;
};

class Image {
public:
    void getImageInfo() const;
private:
    static const int LENGTH = 5;
    Pixel pixels[LENGTH] {
        Pixel(0, 4, 64),
        Pixel(4, 14, 10),
        Pixel(111, 4, 24),
        Pixel(244, 244, 14),
        Pixel(111, 179, 64)
    };
};

int main() {
    Image img;
    img.getImageInfo();
    
    return 0;
}

void Image::getImageInfo() const {
    for (int i = 0; i < LENGTH; i++)
        std::cout << "#" << i << ": " << pixels[i].getInfo();
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
