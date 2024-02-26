// 3. Rectangle geometry
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

const string 
    PERIMETER = "The perimeter of a rectangle is ",
    SQUARE = "The area of a rectangle is ";

class Rectangle {
    public:
        Rectangle(float, float);
        float square() const;
        float perimeter() const;
    private:
        float _length, _width; 
};

Rectangle::Rectangle(float length, float width) {
    this->_length = length;
    this->_width = width;
}

float Rectangle::square() const {
    return this->_length * this->_width;
}

float Rectangle::perimeter() const {
    return 2 * (this->_length + this->_width);
}

int main() {
    float length, width;

    cout << "Enter the length: ";
    cin >> length;

    cout << "Enter the width: ";
    cin >> width;

    Rectangle r(length, width);
    cout << '\n' << PERIMETER << r.perimeter() << '\n';
    cout << SQUARE << r.square() << "\n\n";

    system("pause");
    return 0;
}
