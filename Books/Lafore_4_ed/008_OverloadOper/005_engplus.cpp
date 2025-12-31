// Page 320 - перегрузка операции +
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    Distance() : feet(0), inches(0.0) {}
    Distance(int ft, float in): feet(ft), inches(in) {}

    // Получение информации от пользователя
    void getdist() {
    	cout << "Введите футы: "; cin >> feet;
    	cout << "Введите дюймы: "; cin >> inches;
    }

    void showdist() const
    	{ cout << feet << "\'-" << inches << '\"'; }

    Distance operator+ (const Distance& d2) const {
    	int f = feet + d2.feet;
    	float i = inches + d2.inches;

    	if (i >= 12.0) {
    		i -= 12.0;
    		f++;
    	}

    	return Distance(f, i);
    }
    
};

int main() {
    Distance d1, d3, d4;
    d1.getdist();

    Distance d2(11, 6.25);
    d3 = d1 + d2;
    d4 = d1 + d2 + d3;
    
    cout << "\ndist1 = "; d1.showdist(); cout << endl;
    cout << "dist2 = "; d2.showdist(); cout << endl;
    cout << "dist3 = "; d3.showdist(); cout << endl;
    cout << "dist4 = "; d4.showdist(); cout << endl;

    return 0;
}

