#include <stdio.h>

// 7 kyu - Sum of sequence
unsigned sequence_sum(unsigned start, unsigned end, unsigned step)
{
    unsigned sum = 0;

    for (unsigned i = start; i <= end; i += step)
        sum += i;

    return sum;
}


int main(void)
{
    unsigned start, end, step;
    printf("Enter start, end and step: ");
    scanf("%u%u%u", &start, &end, &step);

    printf("Sum is %u", sequence_sum(start, end, step));
    return 0;
}
