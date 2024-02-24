// Чтение данных из файла по символам
#include <iostream>
#include <string>
#include <fstream>
using std::ifstream;
using std::string;

int main() {
    ifstream fin;
    string path = "myFile.txt";

    fin.open(path);

    if (!fin.is_open())
        std::cout << "Ошибка открытия файла!\n";
    else {
        std::cout << "Файл открыт!\n";
        char ch;
        while (fin.get(ch))
            std::cout << ch;
    }

    fin.close();
    
    return 0;
}
