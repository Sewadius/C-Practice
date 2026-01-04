// Page 179 - графические объекты типа круг
#include <ncurses.h>
#include <cmath>

//////////////////////////////////////////////////////////
struct Circle
// графический объект "круг"
{
    int xCo, yCo;    	// координаты центра
    int radius;      	// радиус
    chtype fillcolor; 	// цвет и атрибуты
    char fillchar;   	// символ заполнения
};
//////////////////////////////////////////////////////////

void circ_draw(Circle c)
{
    // Установка цвета/атрибутов
    attron(c.fillcolor);

    // Алгоритм Брезенхема для рисования круга
    int x = 0;
    int y = c.radius;
    int d = 3 - 2 * c.radius;

    while (y >= x)
    {
        // Рисуем 8 симметричных точек
        mvaddch(c.yCo + y, c.xCo + x, c.fillchar);
        mvaddch(c.yCo - y, c.xCo + x, c.fillchar);
        mvaddch(c.yCo + y, c.xCo - x, c.fillchar);
        mvaddch(c.yCo - y, c.xCo - x, c.fillchar);
        mvaddch(c.yCo + x, c.xCo + y, c.fillchar);
        mvaddch(c.yCo - x, c.xCo + y, c.fillchar);
        mvaddch(c.yCo + x, c.xCo - y, c.fillchar);
        mvaddch(c.yCo - x, c.xCo - y, c.fillchar);

        // Заливка круга (рисуем горизонтальные линии)
        for (int dx = -x + 1; dx < x; dx++) {
            mvaddch(c.yCo + y, c.xCo + dx, c.fillchar);
            mvaddch(c.yCo - y, c.xCo + dx, c.fillchar);
        }
        for (int dx = -y + 1; dx < y; dx++) {
            mvaddch(c.yCo + x, c.xCo + dx, c.fillchar);
            mvaddch(c.yCo - x, c.xCo + dx, c.fillchar);
        }

        x++;

        if (d > 0)
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
        {
            d = d + 4 * x + 6;
        }
    }

    attroff(c.fillcolor);
}

//--------------------------------------------------------
int main()
{
    // Инициализация ncurses
    initscr();                    // инициализация экрана
    cbreak();                     // отключение буферизации
    noecho();                     // не отображать вводимые символы
    curs_set(0);                  // скрыть курсор

    // Проверка поддержки цветов
    if(has_colors()) {
        start_color();            // инициализация цветов

        // Инициализация цветовых пар (можно настроить по своему вкусу)
        init_pair(1, COLOR_BLUE, COLOR_BLACK);
        init_pair(2, COLOR_RED, COLOR_BLACK);
        init_pair(3, COLOR_GREEN, COLOR_BLACK);
    }

    // Очистка экрана
    clear();

    // Создание кругов с использованием возможностей ncurses
    Circle c1 = {15, 7, 5, COLOR_PAIR(1) | A_BOLD, 'X'};      // синий X_FILL
    Circle c2 = {41, 12, 7, COLOR_PAIR(2) | A_BOLD, 'O'};     // красный O_FILL
    Circle c3 = {65, 18, 4, COLOR_PAIR(3) | A_BOLD, '#'};     // зеленый MEDIUM_FILL

    // Альтернативный вариант без цветов (если терминал не поддерживает цвета)
    if(!has_colors()) {
        c1.fillcolor = A_BOLD;
        c2.fillcolor = A_REVERSE;
        c3.fillcolor = A_UNDERLINE;
    }

    circ_draw(c1);  // рисование кругов
    circ_draw(c2);
    circ_draw(c3);

    // Подпись
    mvprintw(23, 1, "Circles with ncurses");
    mvprintw(24, 1, "Press any key for exit...");

    refresh();      // обновление экрана
    getch();        // ожидание нажатия клавиши

    endwin();       // завершение работы с ncurses
    return 0;
}

