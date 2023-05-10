#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int frequency(char *paragraph, char *from, char *to);
int main()
{
    int N;
    char *s;
    int from, to;
    int freq;
    scanf("%d\n", &N);
    s = (char *)malloc((N + 1) * sizeof(char));
    gets(s);
    scanf("%d %d", &from, &to);

    freq = frequency(s, s + from - 1, s + to - 1);

    printf("%d\n", freq);
    return 0;
}

int frequency(char *paragraph, char *from, char *to)
{
    int freq = 0, sub_len = to - from + 1;
    int p = 0;
    while (paragraph[p] != '\0')
    {
        if (paragraph[p] != *from)
        {
            p++;
            continue;
        }
        int t = 0;
        while (paragraph[p + t] == *(from + t) && t < sub_len && paragraph[p + t] != '\0')
            t++;
        if (t == sub_len)
            freq++;
        p++;
    }
    return freq;
}