// Специализация шаблона класса
#include <iostream>
#include <string>
using std::cout;
using std::string;

template <typename T>
class Printer {
public:
    void print(T) const;
};

template<>
class Printer<string> {
public:
    void print(string) const;
};

template<>
class Printer<double> {
public:
    void print(double) const;
};

int main() {
    Printer<int> printer;
    printer.print(545);

    Printer<string> prString;
    prString.print("Hello world!");

    Printer<double> prDouble;
    prDouble.print(1.142);
    
    return 0;
}

template <typename T>
void Printer<T>::print(T value) const {
    cout << value << '\n';
}

void Printer<string>::print(string value) const {
    cout << "___" << value << "___\n";
}

void Printer<double>::print(double value) const {
    cout << "*** " << value << " ***\n";
}
