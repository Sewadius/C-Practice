#include <stdio.h> 

int main(void) {
    unsigned h, m, s;
    unsigned long long result;

    scanf("%u%u%u", &h, &m, &s);
    result = (unsigned long long)(h * 60 * 60 + m * 60 + s);

    printf("%lld\n", result);
    return 0;
}
