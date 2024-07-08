#include <stdio.h>

int main(void)
{
    unsigned short time_h = 10;     // Часы
    unsigned short time_m = 33;     // Минуты
    unsigned short time_s = 5;      // Секунды

    // Добавляемое время: h - часы; m - минуты; s - секунды
    unsigned short h, m, s; 
    scanf("%hu; %hu; %hu", &h, &m, &s);

    // Здесь продолжайте программу
    time_h += h; time_m += m; time_s += s;

    unsigned int time = time_h * 3600 + time_m * 60 + time_s;

    unsigned short s_res = time % 60;
    unsigned short m_res = time / 60 % 60;
    unsigned short h_res = time / 3600;

    printf("%02d:%02d:%02d", h_res, m_res, s_res); 

    return 0;
}
