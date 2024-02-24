// Перегрузка операторов потокового ввода и вывода
#include <iostream>
#include <fstream>
using std::cout;
using std::fstream;
using std::string;
using std::ostream;
using std::istream;

class Point {
public:
    Point();
    Point(int, int, int);
    void print() const;
    int getX() const;
    int getY() const;
    int getZ() const;
    void setX(int);
    void setY(int);
    void setZ(int);
private:
    int x, y, z;
};

ostream& operator<<(ostream&, const Point&);
istream& operator>>(istream&, Point&);

int main() {
    string path = "point.txt";
    fstream fs;
    Point point(121, 245, 241);

    cout << point << '\n';

    
    fs.open(path, fstream::in | fstream::out);

    if (!fs.is_open())
        cout << "Ошибка открытия файла!\n";
    else {
        cout << "Файл открыт!\n";
        fs << point << '\n';
        fs.clear();
        fs.seekg(0);

        while (true) {
            Point p;
            fs >> p;

            if (fs.eof()) break;
            
            p.print();
            cout << p << '\n';
        }
    }

    fs.close();
    
    return 0;
}

Point::Point(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

Point::Point() : Point(0, 0, 0) {}

void Point::print() const {
    cout << "X: " << x << "\tY: " << y << "\tZ: " << z << '\n';
}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

int Point::getZ() const {
    return z;
}

void Point::setX(int x) {
    this->x = x;
}

void Point::setY(int y) {
    this->y = y;
}

void Point::setZ(int z) {
    this->z = z;
}

ostream& operator<<(ostream &os, const Point &point) {
    os << point.getX() << " " << point.getY() << " " << point.getZ();
    return os;
}

istream& operator>>(istream &is, Point &point) {
    int x, y, z;
    is >> x >> y >> z;
    point.setX(x);
    point.setY(y);
    point.setZ(z);

    return is;
}
