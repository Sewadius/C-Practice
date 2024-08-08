#include <stdio.h>

int main(void)
{
    char str[50] = "Best    language   \"C\"";
    int i = 0, j = 0;
    _Bool in_space_group = 0;  

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            if (!in_space_group) {  
                str[j++] = '\n';
                in_space_group = 1;  
            }
            i++;
        } else {
            str[j++] = str[i++];
            in_space_group = 0;  
        }
    }

    str[j] = '\0';  
    puts(str);
    //__ASSERT_TESTS__  
    return 0;
}
