// Задание DeepSeek - передача структурной переменной по ссылке
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using std::cout, std::endl, std::string;

struct Point {
	string name;
	double x;
	double y;
};

void movePoint(Point&, double, double);
void scalePoint(Point&, double);
void rotatePoint(Point&, double);
void displayPoint(const Point&);

int main() {
	Point p1 {"A", 2.0, 3.0 };
	displayPoint(p1);

	cout << "\nПосле сдвига на (1.5, -0.5):" << endl;
	movePoint(p1, 1.5, -0.5);
	displayPoint(p1);

	cout << "\nПосле масштабирования в 2 раза:" << endl;
	scalePoint(p1, 2.0);
	displayPoint(p1);

	cout << "\nПосле поворота на 90 градусов:" << endl;
	rotatePoint(p1, 90);
	displayPoint(p1);

	return 0;
}

// Сдвигает точку на заданные расстояния по x и y
void movePoint(Point& p, double dx, double dy) {
	p.x += dx;
	p.y += dy;
}

// Масштабирует координаты точки на заданный коэффициент
void scalePoint(Point& p, double factor) {
	p.x *= factor;
	p.y *= factor;
}

// Поворачивает точку вокруг начала координат
void rotatePoint(Point& p, double angle) {
	angle *= M_PI / 180;

	double new_x = p.x * cos(angle) - p.y * sin(angle);
	double new_y = p.x * sin(angle) + p.y * cos(angle);

	p.x = new_x;
	p.y = new_y;
}

// Выводит координаты точки
void displayPoint(const Point& p) {
	cout << "Координаты точки " << p.name
		<< ": (" << std::fixed << std::setprecision(1) << p.x <<
		", " << p.y << ")\n";
}
