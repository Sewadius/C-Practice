#include <stdio.h>
#define GREET "Calculating the sum of two float numbers\n"
#define PROMPT_1 "Enter the first float number: "
#define PROMPT_2 "Enter the second float number: "
#define RESULT "Result of the sum: "

// Вычисление суммы двух вещественных чиселел
int main(void)
{
    float a1, a2;

    printf("%s\n", GREET);
    printf(PROMPT_1); scanf("%f", &a1);
    printf(PROMPT_2); scanf("%f", &a2);

    printf("\n%s%.2f\n", RESULT, a1 + a2);
    
    getchar();
    printf("\nPress Enter to exit..."); getchar();
    return 0;
}
