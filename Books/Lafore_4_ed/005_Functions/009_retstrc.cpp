// Page 185 - возвращение функцией структурной переменной
#include <iostream>
using namespace std;

struct Distance {
	int feet;
	float inches;
};

Distance addeng1(Distance, Distance);
void engldisp(Distance);

int main() {
	Distance d1, d2, d3;

	// Ввод значения d1
	cout << "Введите число футов: "; cin >> d1.feet;
	cout << "Введите число дюймов: "; cin >> d1.inches;

	// Ввод значения d2
	cout << "\nВведите число футов: "; cin >> d2.feet;
	cout << "Введите число дюймов: "; cin >> d2.inches;

	d3 = addeng1(d1, d2);
	cout << endl;

	// Вывод всех длин
	engldisp(d1); cout << " + ";
	engldisp(d2); cout << " = ";
	engldisp(d3); cout << endl;

	return 0;
}

// Складывает два значения Distance, возвращает сумму
Distance addeng1(Distance d1, Distance d2) {
	Distance d3;
	d3.inches = d1.inches + d2.inches;
	d3.feet = 0;

	if (d3.inches >= 12.0) {
		d3.inches -= 12.0;
		d3.feet++;
	}

	d3.feet += d1.feet + d2.feet;
	return d3;
}

void engldisp(Distance d) {
	cout << d.feet << "\'-" << d.inches << "\"";
}
