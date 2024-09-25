#include <stdio.h>
#include <math.h>

int main() {
    short x1, y1, x2, y2;
    double distance_1, distance_2;

    scanf("%hd %hd %hd %hd", &x1, &y1, &x2, &y2);
    distance_1 = hypot(x1, y1);
    distance_2 = hypot(x2, y2);

    printf("%s\n", distance_1 > distance_2 ? "2" : 
        distance_1 == distance_2 ? "0" : "1");

    return 0;
}
