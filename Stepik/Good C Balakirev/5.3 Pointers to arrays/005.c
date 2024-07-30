#include <stdio.h>
#define MAX_NUMBERS 20

int main(void) {
    float numbers[MAX_NUMBERS];
    int i = 0;
    
    while (i < MAX_NUMBERS && scanf("%f", &numbers[i]) == 1) ++i;

    float result = .0;

    for (int j = 0; j < i; j++) 
        result += *(numbers + j);

    printf("%.2f\n", result / i);
    return 0;
}
