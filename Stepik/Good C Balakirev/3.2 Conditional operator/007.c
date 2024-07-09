#include <stdio.h>

int main(void)
{
    char day;
    scanf("%hhd", &day);

    switch (day) {
        case 1: printf("понедельник"); break;
        case 2: printf("вторник"); break;
        case 3: printf("среда"); break;
        case 4: printf("четверг"); break;
        case 5: printf("пятница"); break;
        case 6: printf("суббота"); break;
        case 7: printf("воскресенье"); break;
        default: printf("не верный номер дня недели");
    }

    return 0;
}
