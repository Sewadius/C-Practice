#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    switch (ch)
    {
    case 'l':
        printf("коня потеряешь, себя спасёшь!\n");
        break;
    case 'f':
        printf("и себя, и коня потеряешь!\n");
        break;
    case 'r':
        printf("себя потеряешь, коня спасёшь!\n");
        break;
    }

    return 0;
}
