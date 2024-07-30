#include <stdio.h>
#define MAX_NUMBERS 10

int main(void) {
    int numbers[MAX_NUMBERS];
    int count = 0;
    
    while (count < MAX_NUMBERS && scanf("%d", &numbers[count]) == 1) 
        count++;

    int result = 1;

    for (int i = 0; i < count; i++) 
        result &= (numbers[i] >= 0) & (numbers[i] % 2);

    printf("%d\n", result);
    return 0;
}
