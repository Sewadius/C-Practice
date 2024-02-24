/* Использование итераторов для вставки элемента и удаления
** insert(), erase()
*/ 

#include <iostream>
#include <vector>
using std::cout;
using std::vector;

void printVector(vector<int>::iterator, vector<int>&);

int main() {
    vector<int> myVector = {1, 2, 3};
    vector<int>::iterator it;
    
    printVector(it, myVector);

    it = myVector.begin();
    myVector.insert(it, 10);

    printVector(it, myVector);

    myVector.erase(--myVector.end());
    printVector(it, myVector);
    
    return 0;
}

void printVector(vector<int>::iterator it, vector<int> &v) {
    cout << "Элементы вектора: ";
    
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << ' ';
    
    cout << '\n';
}
