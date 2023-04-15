#include <stdio.h>
#include <string.h>

char zodiac[12][10] = {
    "dog", "dragon", "goat", "horse", "monkey", "ox", "pig", "rabbit", "rat", "rooster", "snake", "tiger"};

int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        int t;
        int cnt[12];
        memset(cnt, 0, sizeof(cnt));
        scanf("%d", &t);
        for (int i = 0; i < t; i++)
        {
            char t[20];
            scanf("%s", t);
            for (int j = 0; j < 12; j++)
                if (strcmp(t, zodiac[j]) == 0)
                    cnt[j]++;
        }

        int max = 0;
        for (int i = 0; i < 12; i++)
            if (cnt[i] > max)
                max = cnt[i];

        for (int i = max; i > 0; i--)
        {
            for (int j = 0; j < 12; j++)
                if (cnt[j] == i)
                    printf("%s %d\n", zodiac[j], cnt[j]);
        }
        if (x != 0)
            puts("");
    }
}