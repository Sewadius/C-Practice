// Задание DeepSeek - учет в небольшом магазине
#include <iostream>
using std::cout;

const int ITEMS = 8;

int main() {
    int boxesShelf = ITEMS;
    int boxesCart = 0;

    while (boxesShelf > 0) {
        cout << "Покупатель собирается взять коробку. На полке: "
            << boxesShelf-- << ", в корзине: " << boxesCart++ << '\n';

        cout << "Коробка перемещена! На полке: " << boxesShelf
            << ", в корзине " << boxesCart << "\n\n";
    }

    cout << "Все коробки перемещены в корзину!\n";

    return 0;
}

