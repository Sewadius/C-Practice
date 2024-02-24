// Перегрузка оператора индексирования
#include <iostream>

class TestClass {
public:
    int& operator[](int);
private:
    int arr[5]{5, 44, 4, 987, 69};
};

int main() {
    TestClass a;

    for (int i = 0; i < 5; ++i)
        std::cout << a[i] << " ";

    std::cout << '\n';
    
    return 0;
}

int& TestClass::operator[](int index) {
    return arr[index];
}
