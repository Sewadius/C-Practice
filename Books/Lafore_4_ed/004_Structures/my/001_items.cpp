// Задание DeepSeek - инвентарь небольшого магазина
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int       // Ширина полей вывода
    NO_WIDTH = 2, ID_WIDTH = 4, NAME_WIDTH = 12, 
    QUANTITY_WIDTH = 12, PRICE_WIDTH = 12;

constexpr int   // Общая ширина заголовка
    TOTAL_WIDTH = 
        NO_WIDTH + ID_WIDTH + 
            NAME_WIDTH + QUANTITY_WIDTH + PRICE_WIDTH;

const string SEP = " | ";      // Текстовый разделитель
const int SEPS_WIDTH = 12;      // Щирина для разделителей

struct Item {
    int id;
    string name;
    int quantity;
    double price;
};

const unsigned int SIZE = 5;                        // Размер массива товаров

void printAllItems(Item[], int);                    // Вывод всего каталога
void findItemById(Item[], int, int);                // Поиск товара по ID
double calculateTotalInventoryValue(Item[], int);   // Общая стоимость товаров
void findLowStockItems(Item[], int, int);           // Товары с малым количеством

int main() {
    int idNumber;

    Item items[] = {
        { 101, "Карандаш", 100, 15.5 },
        { 22, "Тетрадь", 50, 45.0 },
        { 30, "Ручка", 200, 20.0 },
        { 504, "Ластик", 75, 10.5 },
        { 65, "Линейка", 30, 25.0 },
    };

    printAllItems(items, SIZE);

    cout << "\nВведите ID товара для поиска: ";
    cin >> idNumber;

    findItemById(items, SIZE, idNumber);

    cout << "Общая стоимость товаров на складе: "
        << fixed << setprecision(2) 
        << calculateTotalInventoryValue(items, SIZE) << " руб.\n";

    // Количество товаров с недостаточным количеством
    int threshold;
    cout << "\nВведите целочисленный порог количества товаров: ";
    cin >> threshold;

    findLowStockItems(items, SIZE, threshold);

    return 0;
}

// Вывод всего каталога товаров
void printAllItems(Item items[], int size) {
    cout << "--- Весь каталог товаров ---\n";

    // Вывод заголовка таблицы
    cout << left << setw(NO_WIDTH) << "№" << SEP
        << setw(ID_WIDTH) << "ID" << SEP
        << setw(NAME_WIDTH) << "Название" << SEP
        << setw(QUANTITY_WIDTH) << "Количество" << SEP
        << setw(PRICE_WIDTH) << "Цена за шт." << '\n';

    // Общая ширина разделителя
    int totalWidth = TOTAL_WIDTH + SEPS_WIDTH;

    for (int i = 0; i < totalWidth; ++i) cout << '-';
    cout << endl;

    // Вывод позиций товаров из массива
    for (int i = 0; i < size; ++i) {
        cout << left << setw(NO_WIDTH) << i + 1 << SEP
            << setw(ID_WIDTH) << items[i].id << SEP
            << setw(NAME_WIDTH) << items[i].name << SEP
            << right << setw(QUANTITY_WIDTH) << items[i].quantity << SEP
            << setw(PRICE_WIDTH) << fixed << setprecision(2) 
            << items[i].price << '\n';
    }
}

// Поиск товара по ID
void findItemById(Item items[], int size, int id) {
    int numFound = -1;

    for (int i = 0; i < size; ++i) {
        if (items[i].id == id) {
            numFound = i; break;
        }
    }
   
    if (numFound != -1) {
        Item found = items[numFound];

        cout << "Найден товар: ID " << found.id
            << ", Название: " << found.name << ", Количество: "
            << found.quantity << ", Цена: " << fixed << setprecision(2)
            << found.price << " рублей" << '\n';
    } else
        cout << "Товар с ID " << id << " не найден.\n";
}

// Общая стоимость товаров на складе
double calculateTotalInventoryValue(Item items[], int size) {
    double totalPrice = 0.0;

    for (int i = 0; i < size; ++i)
        totalPrice += items[i].quantity * items[i].price;

    return totalPrice;
}

// Вывод информации о товарах с малым количеством
void findLowStockItems(Item items[], int size, int threshold) {
    bool isExist = false;
    cout << "\nТовары с малым количеством на складе:\n";

    for (int i = 0; i < size; ++i)
        if (items[i].quantity < threshold) {
            isExist = true;

            cout << "ID: " << items[i].id << ", Название: "
                << items[i].name << ", Количество: "
                << items[i].quantity << ", Цена: "
                << fixed << setprecision(2) << items[i].price << " руб.\n";
        }
    
    if (!isExist) cout << "Все товары в достаточном количестве!\n";
}

