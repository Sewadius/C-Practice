// Page 187 - ссылочный механизм передачи аргументов
#include <iostream>
using namespace std;

void intfrac(float, float&, float&);

int main() {
	float number, intpart, fracpart;
	do {
		cout << "Введите вещественное число: ";
		cin >> number;

		intfrac(number, intpart, fracpart);

		cout << "Целая часть равна " << intpart;
		cout << "\nДробная часть равна " << fracpart << endl;
	} while (number != 0.0);

	return 0;
}

// Вычисляет целую и дробную часть вещественного числа
void intfrac(float n, float& intp, float& fracp) {
	long temp = static_cast<long>(n);
	intp = static_cast<float>(temp);
	fracp = n - intp;
}
