// Page 131 - изображает распределение простых чисел
#include <iostream>
#include <ncurses.h>

int main() {
    // Инициализация ncurses
    initscr();           // Инициализация экрана
    cbreak();            // Построчный ввод отключен, символы доступны сразу
    noecho();            // Не отображать вводимые символы
    curs_set(0);         // Скрыть курсор

    // Определяем символы для отображения
    const unsigned char WHITE = '#';  // символ для простых чисел
    const unsigned char GRAY = '.';   // символ для остальных чисел

    // Получаем размеры терминала
    int max_y, max_x;
    getmaxyx(stdscr, max_y, max_x);
    int total_cells = max_y * max_x;

    // Действия для каждой позиции на экране
    for(int count = 0; count < total_cells; count++) {
        // Рассчитываем координаты
        int y = count / max_x;
        int x = count % max_x;

        // Предполагаем, что число простое
        unsigned char ch = WHITE;

        // Проверяем, является ли число простым
        if(count < 2) {
            // 0 и 1 не являются простыми числами
            ch = GRAY;
        } else {
            // Делим на каждое целое, начиная с 2
            for(int j = 2; j * j <= count; j++) {  // оптимизация: проверяем до sqrt(count)
                if(count % j == 0) {  // если остаток равен 0
                    ch = GRAY;        // то число не простое
                    break;            // выход из внутреннего цикла
                }
            }
        }

        // Вывод символа на экран в нужную позицию
        mvaddch(y, x, ch);
    }

    // Обновляем экран
    refresh();

    // Ждем нажатия любой клавиши
    printw("\n\nНажмите любую клавишу для выхода...");
    refresh();
    getch();

    // Завершаем работу с ncurses
    endwin();

    return 0;
}
