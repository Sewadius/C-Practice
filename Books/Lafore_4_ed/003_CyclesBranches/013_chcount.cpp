// Page 113 - подсчет числа слов и символов (-lncurses)
#include <iostream>
#include <ncurses.h>
using namespace std;

int main() {
    initscr();      // Инициализация ncurses
    echo();         // Включение эхо-вывода (символы будут отображаться на экране)

    int chcount = 0;    // Число непробельных символов
    int wdcount = 1;    // Число пробелов
    char ch;

    printw("Enter the string: ");
    refresh();      // Обновление экрана

    // Запоминаем позицию, где начинается ввод строки
    int start_y, start_x;
    getyx(stdscr, start_y, start_x);

    while (true) {
        ch = getch();

        // Проверка на нажатие Enter (обычно это код 10 или 13)
        if (ch == 10 || ch == 13) break;

        if (ch == ' ') ++wdcount;
        else ++chcount;
    }

    move(start_y + 2, 0); // Смещение на 2 строки вниз от начала ввода
    printw("Words: %d\n", wdcount);
    printw("Letters: %d\n", chcount);

    refresh();      // Обновление экрана

    getch();        // Ожидание нажатия кнопки
    endwin();       // Завершение работы с ncurses

    return 0;
}

