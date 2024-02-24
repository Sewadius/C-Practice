// Ключевое слово auto
#include <iostream>
#include <vector>
using std::vector;

int main() {
    auto a = 10;
    auto b = 1.33;
    auto c = "string";

    std::cout << typeid(a).name() << '\n';
    std::cout << typeid(b).name() << '\n';
    std::cout << typeid(c).name() << '\n';

    vector<int> myVector = {11, 46, 9};

    vector<int>::iterator it = myVector.begin();
    auto it_2 = myVector.end();

    std::cout << "Первый элемент: " << *it << '\n';
    std::cout << "Последний элемент: " << *(it_2 - 1) << '\n';
    
    return 0;
}
