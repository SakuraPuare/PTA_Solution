#include <stdio.h>
#define MAXS 30

char *search(char *s, char *t);
void ReadString(char s[]); /* 裁判提供，细节不表 */

int main()
{
    char s[MAXS], t[MAXS], *pos;

    ReadString(s);
    ReadString(t);
    pos = search(s, t);
    if (pos != NULL)
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}

char *search(char *s, char *t)
{
    char *p = s;
    char *q = t;
    while (*p != '\0')
    {
        if (*p == *q)
        {
            char *temp = p;
            while (*q != '\0')
            {
                if (*temp != *q)
                    break;
                temp++;
                q++;
            }
            if (*q == '\0')
                return p;
            else
            {
                q = t;
                p++;
            }
        }
        else
            p++;
    }
    return NULL;
}