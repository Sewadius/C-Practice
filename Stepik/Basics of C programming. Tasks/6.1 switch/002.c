#include <stdio.h>

int main()
{
    unsigned char k;
    scanf("%hhu", &k);

    switch (k)
    {
    case 1:
        printf("плохо\n");
        break;
    case 2:
        printf("неудовлетворительно\n");
        break;
    case 3:
        printf("удовлетворительно\n");
        break;
    case 4:
        printf("хорошо\n");
        break;
    case 5:
        printf("отлично\n");
        break;
    }

    return 0;
}
