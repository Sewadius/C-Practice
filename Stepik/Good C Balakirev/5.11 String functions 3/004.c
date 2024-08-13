#include <stdio.h>
#include <string.h>

int main(void)
{
    int h, m, s;
    scanf("%d%d%d", &h, &m, &s);
    char result[9];

    if (h < 0 || h > 23)
        strcat(result, "--:");
    else
        sprintf(result, "%02d:", h);

    if (m < 0 || m > 59)
        strcat(result, "--:");
    else
        sprintf(result + strlen(result), "%02d:", m);

    if (s < 0 || s > 59)
        strcat(result, "--");
    else
        sprintf(result + strlen(result), "%02d", s);

    puts(result);
    return 0;
}
