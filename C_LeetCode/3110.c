#include <stdio.h>
#include <math.h>

// 3110. Score of a String
int scoreOfString(char* s)
{
    int score = 0;

    while (*(s + 1) != '\0') {
        score += abs(*s - *(s + 1));
        ++s;
    }

    return score;
}

int main(void)
{
    char s1[] = "hello";
    int res_1 = scoreOfString(s1);
    printf("Score of a String \"hello\": %d\n", res_1);

    char s2[] = "zaz";
    int res_2 = scoreOfString(s2);
    printf("Score of a String \"zaz\": %d\n", res_2);

    return 0;
}
