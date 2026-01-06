// Задание DeepSeek - инвентарь небольшого магазина
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int       // Ширина полей вывода
    ID_WIDTH = 2, NAME_WIDTH = 12, 
    QUANTITY_WIDTH = 10, PRICE_WIDTH = 10;

constexpr int   // Общая ширина 
    TOTAL_WIDTH = ID_WIDTH + NAME_WIDTH + QUANTITY_WIDTH + PRICE_WIDTH;

const string SEP = " | ";      // Текстовый разделитель
const int TOTAL_SEPS = 3;      // Общее количество разделителей

struct Item {
    int id;
    string name;
    int quantity;
    double price;
};

const unsigned int SIZE = 5;    // Размер массива товаров

void printAllItems(Item[], unsigned int);       // Вывод всего каталога
void findItemById(Item[], unsigned int, int);   // Поиск товара по ID

int main() {
    int idNumber;

    Item items[] = {
        { 1, "Карандаш", 100, 15.5 },
        { 2, "Тетрадь", 50, 45.0 },
        { 3, "Ручка", 200, 20.0 },
        { 4, "Ластик", 75, 10.5 },
        { 5, "Линейка", 30, 25.0 },
    };

    printAllItems(items, SIZE);

    cout << "\nВведите ID товара для поиска: ";
    cin >> idNumber;

    findItemById(items, SIZE, idNumber);

    return 0;
}

// Вывод всего каталога товаров
void printAllItems(Item items[], unsigned int size) {
    cout << "--- Весь каталог товаров ---\n";

    // Вывод заголовка таблицы
    cout << left << setw(ID_WIDTH) << "ID" << SEP
        << setw(NAME_WIDTH) << "Название" << SEP
        << setw(QUANTITY_WIDTH) << "Количество" << SEP
        << setw(PRICE_WIDTH) << "Цена за шт." << '\n';

    int totalWidth = 
        TOTAL_WIDTH + static_cast<int>(SEP.length()) * TOTAL_SEPS;

    for (int i = 0; i < totalWidth; ++i) cout << '-';
    cout << endl;

    // Вывод позиций товаров из массива
    for (unsigned int i = 0; i < size; ++i) {
        cout << left << setw(ID_WIDTH) << items[i].id << SEP
            << setw(NAME_WIDTH) << items[i].name << SEP << right
            << setw(QUANTITY_WIDTH) << items[i].quantity << SEP
            << setw(PRICE_WIDTH) << fixed << setprecision(2) 
            << items[i].price << '\n';
    }
}

// Поиск товара по ID
void findItemById(Item items[], unsigned int size, int id) {
    bool isFound = false;
    unsigned int numFound;

    for (unsigned int i = 0; i < size; ++i) {
        if (items[i].id == id) {
            isFound = true; numFound = i; break;
        }
    }

    Item found = items[numFound];
    
    if (isFound)
        cout << "Найден товар: ID " << found.id
            << ", Название: " << found.name << ", Количество: "
            << found.quantity << ", Цена: " << fixed << setprecision(2)
            << found.price << " рублей" << '\n';
    else
        cout << "Товар с ID " << id << " не найден.\n";
}

