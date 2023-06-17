
#include <stdio.h>
struct Student
{
    char name[50]; // 姓名
    int sid;       // 学号
    int C;         // C语言成绩
    int English;   // 英语成绩
    int math;      // 数学成绩
    int grade;     // 总评等级成绩
};
int calScore(struct Student *stu);
int main()
{
    int n;
    scanf("%d", &n);
    struct Student stu;
    int pass;
    for (int i = 0; i < n; i++)
    {
        scanf("%s%d%d%d%d", stu.name, &stu.sid, &stu.C,
              &stu.English, &stu.math);
        pass = calScore(&stu);
        printf("(%d, %s) : %d(%d)\n", stu.sid, stu.name, stu.grade, pass);
    }
    return 0;
}
/** 你所提交的代码将被嵌在这里  **/
int calGrade(struct Student *stu)
{
    int sc = 0;
    int score = stu->C + stu->English + stu->math;
    if (stu->C < 60 || stu->English < 60 || stu->math < 60)
        return 1;

    if (score > 90 * 3)
        sc = 5;
    else if (score > 80 * 3)
        sc = 4;
    else if (score > 70 * 3)
        sc = 3;
    else if (score > 60 * 3)
        sc = 2;
    else
        sc = 1;

    if (stu->C < 90 && sc == 5)
        sc = 4;

    return sc;
}

int calScore(struct Student *stu)
{
    stu->grade = calGrade(stu);
    if (stu->grade == 1)
        return 0;
    else
        return 1;
}