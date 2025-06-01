#include <stdio.h>
#include <stdbool.h>

// 7 kyu - Is this a triangle?
bool is_triangle(int a, int b, int c)
{
    bool 
        check_1 = a + b > c,
        check_2 = a + c > b,
        check_3 = b + c > a;

    return check_1 && check_2 && check_3;
}

int main(void)
{
    int a, b, c;
    printf("Enter a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Is triangle: %d\n", is_triangle(a, b, c));
    return 0;
}
