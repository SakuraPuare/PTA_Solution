#include <stdio.h>

double m_tax(double salary, int month);

int main()
{
    double money, tax;
    int i;
    for (i = 1; i <= 12; i++)
    {
        scanf("%lf", &money);
        tax = m_tax(money, i);
        printf("the sum of %d months tax is %.2f\n", i, tax);
    }
    return 0;
}

double m_tax(double salary, int month)
{
    static double sum = 0;
    sum += salary;

    if (sum <= month * 5000)
        return 0;
    salary = sum - month * 5000;

    if (salary <= 36000)
        return salary * 0.03;
    else if (salary <= 144000)
        return salary * 0.1 - 2520;
    else if (salary <= 300000)
        return salary * 0.2 - 16920;
    else if (salary <= 420000)
        return salary * 0.25 - 31920;
    else if (salary <= 660000)
        return salary * 0.3 - 52920;
    else if (salary <= 960000)
        return salary * 0.35 - 85920;
    else
        return salary * 0.45 - 181920;
}