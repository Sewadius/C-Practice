#include <stdio.h>

extern int global_var;      // Переменная в файле module.c
extern char global_str[];   // Переменная объявлена дальше в программе

int randint(int, int);      // Объявление для функции в module.c

// Использование extern для переменной из другого файла
int main(void)
{
    printf("global_var = %d\n", global_var);
    printf("global_str = %s\n", global_str);

    int a = 1, b = 10;

    for (int i = 0; i < 3; ++i)
        printf("%d\n", randint(a, b));

    return 0;
}

char global_str[100] = "Hello";
