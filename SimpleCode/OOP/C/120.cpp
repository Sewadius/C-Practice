// Обработка исключений try catch
#include <iostream>
#include <fstream>
using std::ifstream;
using std::string;

int main() {
    string path = "nofile.txt";
    ifstream fin;

    fin.exceptions(ifstream::badbit | ifstream::failbit);

    try {
        std::cout << "Попытка открыть файл!\n";
        fin.open(path);
        std::cout << "Файл успешно открыт!\n";
    }
    
    catch (const std::exception& ex) {
        std::cout << ex.what() << '\n';
        std::cout << "Ошибка открытия файла!\n";
    }

    fin.close();
    
    return 0;
}
