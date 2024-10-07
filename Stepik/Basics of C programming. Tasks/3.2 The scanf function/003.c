#include <stdio.h>

int main(void){
    double course, dollars, rub;

    scanf("%lf%lf", &dollars, &course);
    rub = dollars * course;

    printf("%f\n", rub);
    return 0;
}
