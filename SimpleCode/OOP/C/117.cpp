// Запись и чтение объекта класса в файле
#include <iostream>
#include <string>
#include <fstream>
using std::cout;
using std::string;
using std::ofstream;
using std::ifstream;

class Point {
public:
    Point();
    Point(int, int, int);
    void print() const;
private:
    int x, y, z;
};

int main() {
    string path = "newFile.txt";
    Point point(5, 10, 46);
    ofstream fout;
    ifstream fin;

    point.print();

    /* Запись в файл */

    fout.open(path);

    if (!fout.is_open())
        cout << "Ошибка открытия файла!\n";
    else {
        cout << "Файл открыт!\n";
        fout.write((char*)&point, sizeof(Point));
    }

    fout.close();

    /* Чтение из файла */

    fin.open(path);

    if (!fin.is_open())
        cout << "Ошибка открытия файла!\n";
    else {
        cout << "Файл открыт!\n";
        Point pointRead;
        fin.read((char*)&pointRead, sizeof(Point));
        pointRead.print();
    }

    fin.close();
    
    return 0;
}

Point::Point() {
    x = y = z = 0;
}

Point::Point(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

void Point::print() const {
    cout << "X: " << x << "\tY: " << y << "\tZ: " << z << '\n';
}
