// Задание DeepSeek - конвертер дистанций
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

// Константы для перевода величин
const double 
    SEA = 1.852,
    LAND = 1.60934;

double getKilometers();
void printResults(double, double, double);

int main() {
    double kilometers = getKilometers();
    
    double 
        seaMile = kilometers / SEA,
        landMile = kilometers / LAND;

    printResults(kilometers, seaMile, landMile);
    cout << endl;

    return 0;
}

// Функция получения данных от пользователя
double getKilometers() {
    double input = 0.0;

    while (true) {
        cout << "Введите расстояние в километрах: ";
        cin >> input;

        if (input <= 0.0) {
            cout << "Некорректный ввод! Расстояние меньше или равно нулю!\n";
            continue;
        }
        
        return input;
    }
}

// Вывод результатов на экран
void printResults(double kms, double sea, double land) {
    cout << "\nРезультаты конвертации:" << endl;

    cout << std::fixed << std::setprecision(2) 
        << kms << " км = " << sea << " морских миль\n"
        << kms << " км = " << land << " сухопутных миль"; 
}

