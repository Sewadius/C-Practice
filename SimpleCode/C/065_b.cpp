// Пример функции в качестве параметра
#include <iostream>
#include <string>
using std::string;

string getDataFromDB() {
    return "Data from DB";
}

string getDataFromWebServer() {
    return "Data from WebServer";
}

void showInfo(string(*)());

int main() {
    showInfo(getDataFromDB);
    showInfo(getDataFromWebServer);

    return 0;
}

void showInfo(string(*foo)()) {
    std::cout << foo() << '\n';
}
