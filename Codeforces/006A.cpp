// A. Треугольник - сложность 900
#include <iostream>
#include <string>
using std::cout;
using std::string;

const string TRG = "TRIANGLE\n",
    SEG = "SEGMENT\n", IMP = "IMPOSSIBLE\n";

string checkNumbers(int, int, int, int);

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    cout << checkNumbers(a, b, c, d);
    
    return 0;
}

string checkNumbers(int a, int b, int c, int d) {
    bool abc_check_trg = a + b > c && b + c > a && a + c > b;
    bool abd_check_trg = a + b > d && b + d > a && a + d > b;
    bool bcd_check_trg = b + c > d && b + d > c && c + d > b;
    bool acd_check_trg = a + c > d && a + d > c && c + d > a;

    bool abc_check_seg = a + b == c || b + c == a || a + c == b;
    bool abd_check_seg = a + b == d || b + d == a || a + d == b;
    bool bcd_check_seg = b + c == d || b + d == c || c + d == b;
    bool acd_check_seg = a + c == d || a + d == c || c + d == a;

    if (abc_check_trg || abd_check_trg || bcd_check_trg || acd_check_trg)
        return TRG; 
    
    if (abc_check_seg || abd_check_seg || bcd_check_seg || acd_check_seg)
        return SEG;

    return IMP;
}
