// Сохранение данных в файл
#include <iostream>
#include <string>
#include <fstream>
using std::ofstream;
using std::string;

int main() {
    ofstream fout;
    string path = "myFile.txt";

    fout.open(path);

    if (!fout.is_open())
        std::cout << "Ошибка открытия файла!\n";
    else
        fout << "Это наши данные!\n";

    fout.close();

    // Открыть в режиме "дописать"
    fout.open(path, ofstream::app);

    fout << "Новые данные\n";

    fout.close();
    
    return 0;
}
