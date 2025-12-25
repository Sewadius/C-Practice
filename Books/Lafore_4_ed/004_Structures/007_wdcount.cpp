// Page 160 - подсчет слов с перечислениями -lncurses
#include <iostream>
#include <ncurses.h>
using namespace std;

enum itisaWord { NO, YES};

int main() {
    itisaWord isWord = NO;
    int wordcount = 1;          // Итоговое количество слов
    char ch;

    initscr(); echo();

    printw("Enter a sentence: ");
    refresh();

    // Запоминаем позицию, где начинается ввод строки
    int start_y, start_x;
    getyx(stdscr, start_y, start_x);

    while (true) {
        ch = getch();

        if (ch == 10 || ch == 13) break;

        if (ch == ' ') {
            if (isWord == YES) {
                ++wordcount; isWord = NO;
            }
        } else if (isWord == NO) isWord = YES;
    }

    move(start_y + 1, 0);   // Смещение на 1 строку вниз от начала ввода
    printw("\n--- Number of words: %d ---\n", wordcount);
    refresh();
    
    getch();        // Ожидание символа
    endwin();       // Завершение работы ncurses

    return 0;
}

