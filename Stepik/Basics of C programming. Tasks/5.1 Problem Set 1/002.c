#include <stdio.h>
#define PI 3.14159265358979323846

int main()
{
    short r, h;
    scanf("%hd %hd", &r, &h);

    double v_cylinder = PI * r * r * h;
    double v_cone = v_cylinder / 3;

    printf("%.2f %.2f\n", v_cylinder, v_cone);
    return 0;
}
