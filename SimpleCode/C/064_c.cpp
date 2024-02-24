// Ещё один пример конкатенации
#include <iostream>
#include <string>
using std::cout;
using std::string;


int main() {
    string str1 = "Мартин", 
        str2 = "Игоревич",
            str3 = "Дугин", result;

    result = "Фамилия " + str3 + "\tИмя " + str1 +
        "\tОтчество " + str2;

    cout << result << std::endl; 

    return 0;
}
