#include <iostream>
using std::cout;

int main() {
    int v1, v2, s;
    float t;
    std::cin >> v1 >> v2 >> s;
    t = s * 60 / v1;
    cout << "Через " << int(t / 60) << " часов, " 
        << t - int(t / 60) * 60 << " минут";
    return 0;
}
