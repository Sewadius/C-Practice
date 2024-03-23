#include <iostream>
using std::cout;

int main() {
    int apples, students;
    std::cin >> apples >> students;
    cout << "Каждому школьнику " << apples / students <<
        " яблок, " << apples % students << " яблок в корзине";
    return 0;
}
