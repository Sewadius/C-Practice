#include <stdio.h>
#include <stdint.h>
#define YES "Great, now move on to tricks"
#define NO "Keep at it until you get it"

// 8 kyu - Keep up the hoop
char* hoop_count(uint32_t n)
{
    return n > 9 ? YES : NO;
}

int main(void)
{
    printf("%s\n", hoop_count(10));
    printf("%s\n", hoop_count(6));
    return 0;
}
