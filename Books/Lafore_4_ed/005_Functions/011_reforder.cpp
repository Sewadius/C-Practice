// Page 190 - упорядочивает по возрастанию пары чисел
#include <iostream>
using namespace std;

void order(int&, int&);

int main() {
	int n1 = 99, n2 = 11;
	int n3 = 22, n4 = 88;

	order(n1, n2);
	order(n3, n4);

	// Вывод результата
	cout << "После вызова функции\n";
	cout << "n1 = " << n1 << ", n2 = " << n2 << endl;
	cout << "n3 = " << n3 << ", n4 = " << n4 << endl;

	return 0;
}

// Урорядочивает числа по возрастанию
void order(int& a, int& b) {
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
}
