// Ссылки
#include <iostream>
using std::cout;

int main() {
    int a = 5;
    int *pa = &a;
    int &aRef = a;

    cout << "pa\t" << pa << " " << *pa << "\n";
    pa++;
    cout << "pa\t" << pa << " " << *pa << "\n";
    cout << "&ref\t" << aRef << "\n";
    
    return 0;
}
