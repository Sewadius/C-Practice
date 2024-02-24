// Свой класс exception, создание собственного класса исключений
#include <iostream>
using std::cout;

class MyException : public std::runtime_error {
public:
    MyException(const char*, int);
    int get_dataState() const;
private:
    int _dataState;
};

void foo(int);

int main() {
    try {
        foo(1);
    }

    catch (MyException &ex) {
        cout << ex.what();
        cout << "Состояние данных: " << ex.get_dataState() << '\n';
    }

    catch (std::runtime_error &ex) {
        cout << "Блок 1 Мы поймали " << ex.what() << std::endl;
    }
    
    return 0;
}

void foo(int value) {
    if (value < 0)
        throw std::runtime_error("Число меньше 0!\n");

    if (value == 1)
        throw MyException("Число равно 0!\n", value);

    cout << "Переменная = " << value << '\n';
}

MyException::MyException(const char* msg, int dataState) : std::runtime_error(msg) {
    this->_dataState = dataState;
}

int MyException::get_dataState() const {
    return _dataState;
}
