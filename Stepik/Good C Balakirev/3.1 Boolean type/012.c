#include <stdio.h>

int main(void)
{
    int rect_width = 640, rect_height = 480;
    int w = 1, h = 1;
    scanf("%d; %d", &w, &h);

    // Здесь продолжайте программу
    int fit_horizontal = rect_width / w;
    int fit_vertical = rect_height / h;

    int total_fit = fit_horizontal * fit_vertical;

    int total_possible_horizontal = (rect_width + w - 1) / w; 
    int total_possible_vertical = (rect_height + h - 1) / h;
    int total_possible = total_possible_horizontal * total_possible_vertical;
    
    int not_fit = total_possible - total_fit;

    printf("%d", not_fit);

    return 0;
}
