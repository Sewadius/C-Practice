// Чтение данных из файла по строкам
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
        string str;
        
        while(!fin.eof()) {
            str = "";
            //fin >> str;
            std::getline(fin, str);
            std::cout << str << '\n';
        }

        fin.close();
    }
    
    return 0;
}
