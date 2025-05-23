#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(3) << a + b + c << endl
         << a * b * c << endl
         << (a + b + c) / 3 << endl;

    return 0;
}
