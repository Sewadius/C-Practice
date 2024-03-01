// Two bool variables
#include <iostream>
using std::cout;
using std::cin;

int main() {
    bool a, b;
    cout << "Enter bool 'a' and 'b': ";
    cin >> a >> b;

    bool 
        check = !(a == b) && (a && b || a) || a;

    cout << "Result is: " << (check ? "Yes\n\n" : "No\n\n");

    system("pause");
    return 0;
}
