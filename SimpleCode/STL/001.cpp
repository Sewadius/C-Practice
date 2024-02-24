// vector, STL
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    vector<int> myVector;

    myVector.push_back(2);
    myVector.push_back(44);
    myVector.push_back(77);

    myVector[0] = 1000;

    cout << "Количество элементов в векторе: " << myVector.size() << '\n';
    cout << "capacity вектора: " << myVector.capacity() << '\n';

    myVector.reserve(100);
    cout << "reserve(100)\n";
    cout << "capacity вектора: " << myVector.capacity() << '\n';

    myVector.shrink_to_fit();
    cout << "shrink_to_fit()\n";
    cout << "capacity вектора: " << myVector.capacity() << '\n';

    cout << "myVector.empty(): " << std::boolalpha << myVector.empty() << '\n';


    cout << "Элементы: ";

    for (size_t i = 0; i < myVector.size(); ++i)
        cout << myVector[i] << ' ';

    cout << '\n';
    
    return 0;
}
