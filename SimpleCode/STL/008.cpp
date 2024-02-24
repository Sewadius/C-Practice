// deque C++
#include <iostream>
#include <deque>
using std::deque;
using std::cout;

void printDeque(const deque<int>&);

int main() {
    deque<int> dq = {1, 9, 94};

    cout << "Изначальный deque: ";
    printDeque(dq);

    cout << "После метода assign(7, 100): ";
    dq.assign(7, 100);
    printDeque(dq);

    cout << "Размер deque: " << dq.size() << '\n';
    
    return 0;
}

void printDeque(const deque<int>& deq) {
    for (const int& el : deq)
        cout << el << ' ';
    cout << '\n';
}
