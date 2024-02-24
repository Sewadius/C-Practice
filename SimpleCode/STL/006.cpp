// array STL C++
#include <iostream>
#include <array>
using std::array;
using std::cout;

int main() {
    array<int, 4> arr = {1, 94, 77, 9};
    
    cout << "Первый элемент: " << arr[0] << ' ' << arr.at(0) << '\n';

    for (size_t i = 0; i < arr.size(); ++i)
        cout << arr.at(i) << ' ';

    cout << '\n';

    arr.fill(-1);

    for (const int& i : arr)
        cout << i << ' ';

    cout << '\n';

    try {
        cout << arr.at(11) << std::endl;
    }
    catch (const std::exception& ex) {
        cout << ex.what() << '\n';
    }
    
    return 0;
}
