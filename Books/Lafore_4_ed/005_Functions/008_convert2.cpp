// Page 184 - более компактная версия convert
#include <iostream>
using namespace std;

const float LB_TO_KG = 0.453592f;
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
	return LB_TO_KG * pounds;
}
