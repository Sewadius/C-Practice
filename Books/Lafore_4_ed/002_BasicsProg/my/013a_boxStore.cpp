// Задание DeepSeek - покупатель со списком
#include <iostream>
using std::cout;

const int ITEMS = 10;

int main() {
    int boxesShelf = ITEMS;
    int boxesCart = 0;

    for (int i = 0; i < ITEMS; ++i) {
        cout << "Покупатель проряет коробку " << i + 1 << "... На полке: "
            << boxesShelf << " товаров.\n";

        // Проверку проходит каждая чётная коробка (2, 4, 6 и т.д.)
        if (i % 2 == 1) {
            cout << "Коробка прошла проверку! Покупатель кладёт товар в корзину!"
                << "\nНа полке: " << --boxesShelf << ", в корзине: " 
                << ++boxesCart << "\n\n";
        } else {
            cout << "Проверка не пройдена! Товар остаётся на полке."
                << "\nНа полке: " << boxesShelf << ", в корзине: " 
                << boxesCart << "\n\n";
        }
    }
    
    return 0;
}

