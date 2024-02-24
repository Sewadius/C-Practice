// std::function, полиморфная обёбртка функции
#include <iostream>
#include <functional>
#include <vector>
using std::cout;
using std::vector;
using std::function;

void foo(int);
void bar(int);
void doWork(const vector<int>&, function<void(int)>);

int main() {
    vector<int> myVector = {1, 51, 4, 10, 44, 98, 12, 22, 29, 49};
    
    cout << "Функция foo(): ";
    doWork(myVector, foo);

    cout << "\nФункция bar(): ";
    doWork(myVector, bar);
    cout << '\n';

    return 0;
}

void foo(int a) {
    if (a > 10 && a < 40)
        cout << a << ' ';
}

void bar(int a) {
    if (!(a % 2)) cout << a << ' ';
}

void doWork(const vector<int> &vec, function<void(int)> f) {
    for (const auto& el : vec) f(el);
}
