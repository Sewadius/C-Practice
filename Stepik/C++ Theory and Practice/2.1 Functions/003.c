#include <stdio.h>
#define STUDENTS 5

float average_score_calculation(size_t, size_t, size_t);

int main(void)
{
    size_t mark_1, mark_2, mark_3;

    for (int i = 0; i < STUDENTS; ++i) {
        scanf("%zu %zu %zu", &mark_1, &mark_2, &mark_3);
        printf("%g\n", average_score_calculation(mark_1, mark_2, mark_3));
    }

    return 0;   
}

float average_score_calculation(size_t m1, size_t m2, size_t m3)
{
    return (m1 + m2 + m3) / 3.;
}
