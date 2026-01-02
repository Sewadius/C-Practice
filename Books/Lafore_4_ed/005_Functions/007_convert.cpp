// Page 181 - возврат значения функцией
#include <iostream>
using namespace std;

float lbstokg(float);	// Прототип функции

int main() {
	float lbs;
	cout << "Введите вес в фунтах: ";
	cin >> lbs;

	float kgs = lbstokg(lbs);
	cout << "Вес в килограммах равен " << kgs << endl;

	return 0;
}

float lbstokg(float pounds) {
	float kilograms = 0.453592 * pounds;
	return kilograms;
}
