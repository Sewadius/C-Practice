// Чтение и запись в файл через класс fstream
#include <iostream>
#include <fstream>
using std::fstream;
using std::string;
using std::cout;
using std::cin;

int main() {
    string path = "myfile.txt";

    fstream fs;
    fs.open(path, fstream::in | fstream::out | fstream::app);

    if (!fs.is_open())
        cout << "Ошибка открытия файла!\n";
    else {
        int value;
        string msg;

        cout << "Файл открыт!\n";
        cout << "Введите 1 для записи сообщения в файл\n" <<
            "Введите 2 для считывания всех сообщений из файла: ";
        
        cin >> value;

        if (value == 1) {
            cout << "Введите ваше сообщение: ";
            cin >> msg;
            fs << msg << '\n';
        }

        if (value == 2) {
            cout << "Чтение данных из файла\n";
            while (!fs.eof()) {
                msg = "";
                fs >> msg;
                cout << msg << '\n';
            }
        }
    }
    
    fs.close();

    return 0;
}
