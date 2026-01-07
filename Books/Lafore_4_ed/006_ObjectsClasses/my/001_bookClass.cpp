// Задание DeepSeek - класс Book
#include <iostream>
using std::cout;

class Book {
private:
    int _id;
    int _year;
public:
    void setInfo(int, int);     // Установка значений полей
    void showInfo() const;      // Вывод информации о книге
};

int main() {
    Book book1, book2;

    book1.setInfo(101, 2005);
    book2.setInfo(102, 2010);

    book1.showInfo();
    book2.showInfo();

    return 0;
}

void Book::setInfo(int id, int year) {
    _id = id; _year = year;
}

void Book::showInfo() const {
    cout << "Книга [ID: " << _id << ", Год издания: " 
        << _year << "]\n";
}

