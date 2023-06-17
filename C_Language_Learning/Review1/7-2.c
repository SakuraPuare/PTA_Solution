#include <stdio.h>

struct People
{
    char name[20];
    double base, bonus, cost;
};

int main()
{
    int n = 3;
    struct People people[n];
    for (int i = 0; i < n; i++)
        scanf("%s %lf %lf %lf", people[i].name, &people[i].base, &people[i].bonus, &people[i].cost);

    for (int i = 0; i < n; i++)
        printf("%s %0.2lf\n", people[i].name, people[i].base + people[i].bonus - people[i].cost);
}