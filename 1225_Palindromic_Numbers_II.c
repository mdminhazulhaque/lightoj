/** 1225 - Palindromic Numbers (II) */

#include <stdio.h>
#include <string.h>

int ispal(const char *s)
{
    const char *p = s + strlen(s) - 1;
    while (s < p)
        if (*p-- != *s++)
            return 0;

    return 1;
}

int main()
{
    int caseno = 0, cases;

    scanf("%d", &cases);

    while(cases--)
    {
        printf("Case %d: ", ++caseno);

        char buff[16];
        scanf("%s", buff);

        if(ispal(buff))
            puts("Yes");
        else
            puts("No");

        //puts("\n");
    }

    return 0;
}
