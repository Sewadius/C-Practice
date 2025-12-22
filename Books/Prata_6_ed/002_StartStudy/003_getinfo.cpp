// Page 67 - ввод и вывод
#include <iostream>
using namespace std;

int main() {
    int carrots;

    cout << "How many carrots do you have? ";
    cin >> carrots;

    cout << "Here are two more. ";
    carrots += 2;

    cout << "Now you have " << carrots 
        << " carrots." << endl;
        
    return 0;
}

