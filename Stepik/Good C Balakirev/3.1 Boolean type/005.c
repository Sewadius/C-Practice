#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    double y = 1.86;
    bool is_range = y >= -2 && y <= 5;
    printf("In range [-2; 5]: %s", is_range ? "true" : "false");

    bool is_not_range = y < -2 || y > 5;
    printf("\nOut of range [-2; 5]: %s", is_not_range ? "true" : "false");
    return 0;
}
