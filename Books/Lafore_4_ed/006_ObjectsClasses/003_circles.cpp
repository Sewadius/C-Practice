// Page 225 - круги в качестве объектов
#include <ncurses.h>

// Перечисление цветов ncurses (упрощённое)
enum color {
    cBLUE = 1, cRED = 2, cGREEN = 3
};

// Класс круга
class Circle {
private:
    int xCo, yCo;      // координаты центра
    int radius;         // радиус
    color fillcolor;    // цвет
    char fillchar;       // символ для заливки

public:
    // Установка атрибутов круга
    void set(int x, int y, int r, color fc, char symbol = '*') {
        xCo = x;
        yCo = y;
        radius = r;
        fillcolor = fc;
        fillchar = symbol;
    }

    // Рисование круга псевдографикой
    void draw() {
        // Устанавливаем цвет
        attron(COLOR_PAIR(fillcolor));
        
        // Перебираем все точки в квадрате вокруг центра
        for (int y = yCo - radius; y <= yCo + radius; y++) {
            for (int x = xCo - radius; x <= xCo + radius; x++) {
                // Проверяем, находится ли точка внутри круга
                int dx = x - xCo;
                int dy = y - yCo;
                if (dx*dx + dy*dy <= radius*radius) {
                    mvaddch(y, x, fillchar);  // рисуем символ в позиции (y, x)
                }
            }
        }
        
        attroff(COLOR_PAIR(fillcolor));
    }
};

int main() {
    // Инициализация ncurses
    initscr();
    cbreak();               // отключаем буферизацию ввода
    noecho();               // не отображаем вводимые символы
    keypad(stdscr, TRUE);   // включаем обработку спец. клавиш
    curs_set(0);            // скрываем курсор
    
    // Включаем цвета
    if (has_colors()) {
        start_color();
        
        // Настраиваем цветовые пары
        init_pair(cBLUE, COLOR_BLUE, COLOR_BLACK);
        init_pair(cRED, COLOR_RED, COLOR_BLACK);
        init_pair(cGREEN, COLOR_GREEN, COLOR_BLACK);
    }
    
    // Создаём круги
    Circle c1, c2, c3;
    
    // Устанавливаем атрибуты кругов
    c1.set(15, 7, 5, cBLUE, '*');
    c2.set(41, 12, 7, cRED, '#');
    c3.set(65, 18, 4, cGREEN, '+');
    
    // Рисуем круги
    c1.draw();
    c2.draw();
    c3.draw();
    
    // Обновляем экран
    refresh();
    
    // Ждём нажатия клавиши
    getch();
    
    // Завершаем работу с ncurses
    endwin();
    
    return 0;
}

