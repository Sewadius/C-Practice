// Page 231 - "круг" и конструкторы
#include <ncurses.h>

// Перечисление цветов ncurses (упрощённое)
enum color {
    cBLUE = 1, cRED = 2, cGREEN = 3
};

// Класс круга
class Circle {
private:
    int xCo, yCo;       // Координаты центра
    int radius;         // Радиус
    color fillcolor;    // Цвет
    char fillchar;      // Символ для заливки

public:
    // Конструктор
    Circle(int x, int y, int r, color fc, char symbol = '*') :
        xCo(x), yCo(y), radius(r), fillcolor(fc), fillchar(symbol) {}

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
                    mvaddch(y, x, fillchar);  // Рисуем символ в позиции (y, x)
                }
            }
        }
        
        attroff(COLOR_PAIR(fillcolor));
    }
};

int main() {
    // Инициализация ncurses
    initscr();
    cbreak();               // Отключаем буферизацию ввода
    noecho();               // Не отображаем вводимые символы
    keypad(stdscr, TRUE);   // Включаем обработку спец. клавиш
    curs_set(0);            // Скрываем курсор
    
    // Включаем цвета
    if (has_colors()) {
        start_color();
        
        // Настраиваем цветовые пары
        init_pair(cBLUE, COLOR_BLUE, COLOR_BLACK);
        init_pair(cRED, COLOR_RED, COLOR_BLACK);
        init_pair(cGREEN, COLOR_GREEN, COLOR_BLACK);
    }
    
    // Создаём круги с помощью конструктора
    Circle 
        c1(15, 7, 5, cBLUE, '*'), 
        c2(41, 12, 7, cRED, '#'), 
        c3(65, 18, 4, cGREEN, '+');      
    
    // Рисуем круги
    c1.draw(); c2.draw(); c3.draw();
    
    refresh();      // Обновляем экран
    getch();        // Ждём нажатия клавиши
    endwin();       // Завершаем работу с ncurses
    
    return 0;
}
