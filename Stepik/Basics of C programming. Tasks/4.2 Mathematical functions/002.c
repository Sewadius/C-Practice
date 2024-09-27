#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    printf("%.2f\n", hypot((x2 - x1), (y2 - y1)));
    return 0;
}
