#include <stdio.h>
void findsal(float sal)
{
    float hra, da;
    if (sal <= 10000)
    {
        hra = 0.20 * sal;
        da = 0.80 * sal;
        sal = sal + da + hra;
        printf("Salaray of the employ is %f", sal);
    }
    else if (sal <= 20000)
    {
        hra = 0.25 * sal;
        da = 0.90 * sal;
        sal = sal + da + hra;

        printf("Salaray of the employ is %f", sal);
    }
    else if (sal > 20000)
    {
        hra = 0.30 * sal;
        da = 0.95 * sal;
        sal = sal + da + hra;
        printf("Salaray of the employ is %f", sal);
    }
}
int main()
{
    float sal;
    printf("Enter your salary\n");
    scanf("%f", &sal);
    findsal(sal);
    return 0;
}
