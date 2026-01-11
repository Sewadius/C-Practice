// Задание DeepSeek - ограничения и каждая 3-я коробка
#include <iostream>
using std::cout;

const int ITEMS = 100;      // Изначально 100 коробок на полке
const int CAPACITY = 5;     // Лимит вместимости корзины в 5 коробок

int main() {
    int boxesShelf = ITEMS;     // Коробок на полке
    int boxesCart = 0;          // Коробок в корзине
    int counter = 1;            // Счетчик проверок товаров
    int failedVerify = 0;       // Коробок не прошло проверку

    // Пока не проверены все товары
    while (counter <= ITEMS) {
        cout << "Покупатель проверяет коробку " << counter
            << "... \nНа полке: " << boxesShelf << ", в корзине: "
            << boxesCart << '\n';

        if (counter % 3 == 0) {
            cout << "Коробка прошла проверку! Покупатель кладёт товар в корзину!"
                << "\nНа полке: " << --boxesShelf << ", в корзине: " 
                << ++boxesCart << "\n\n";
        } else {
            cout << "Проверка не пройдена! Товар остаётся на полке."
                << "\nНа полке: " << boxesShelf << ", в корзине: " 
                << boxesCart << "\n\n";

            ++failedVerify;
        }

        // Достигнут лимит вместимости корзины
        if (boxesCart == CAPACITY) {
            cout << "Достигнут лимит вместимости корзины!\n"; break;
        }

        ++counter;
    }

    cout << "Проверка завершена! Товаров не прошло проверку: " 
        << failedVerify << '\n';

    return 0;
}

