#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100];
    char ch = ' ';
    int i = 0;

    while (scanf("%c", &ch) && ch != '\n')
    {
        if (!isdigit(ch))
        {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
	puts(str);
    //fputs(str, stdout);
    printf("\n");
    return 0;
}

