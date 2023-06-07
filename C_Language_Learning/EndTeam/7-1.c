#include <stdio.h>

struct student
{
    char id[20];
    char name[20];
    int score;
    char grade;
};

int main()
{
    struct student stu[15];
    int n, cnt = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int scr;
        scanf("%s%s%d", stu[i].id, stu[i].name, &scr);
        if (scr < 60)
            cnt++;

        if (scr >= 85)
            stu[i].grade = 'A';
        else if (scr >= 70)
            stu[i].grade = 'B';
        else if (scr >= 60)
            stu[i].grade = 'C';
        else
            stu[i].grade = 'D';
    }

    for (int i = 0; i < n; i++)
        printf("%s %s %c\n", stu[i].id, stu[i].name, stu[i].grade);
    printf("%d", cnt);
}