#include <stdio.h>
#define AMOUNT "Enter the principal amount: "
#define RATE "Enter the annual rate of interest (in %%): "
#define PERIOD "Enter the time period (in years): "

// Task: Simple Interest Calculator
int main(void)
{
    unsigned int amount, rate, period;
    printf(AMOUNT); scanf("%u", &amount);
    printf(RATE); scanf("%u", &rate);
    printf(PERIOD); scanf("%u", &period);

    double interest = (amount * rate * period) / 100.;
    printf("Simple Interest: %.2f", interest);
    return 0;
}
