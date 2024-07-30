#include <stdio.h>
#define LEN 4

int main(void)
{
    int value;
    scanf("%d", &value);

    char ar_d[LEN];
    char* ptr = (char*)&value;

    for (int i = 0; i < LEN; ++i) {
        ar_d[i] = *ptr++;
        printf("%d ", *(ar_d + i));
    }

    // __ASSERT_TESTS__ 
    return 0;
}
