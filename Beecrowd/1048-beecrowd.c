#include <stdio.h>
int main() 
{
    float range,upSalary,extra;
    scanf("%f",&range);
    if (0<range && range<=400.00)
    {
        extra = ((15*range)/100);
        upSalary = range + extra;
        printf("Novo salario: %.2f\n",upSalary);
        printf("Reajuste ganho: %.2f\n",extra);
        printf("Em percentual: 15 %%\n");
    }
    else if (400.00<range && range<=800.00)
    {
        extra = ((12*range)/100);
        upSalary = range + extra;
        printf("Novo salario: %.2f\n",upSalary);
        printf("Reajuste ganho: %.2f\n",extra);
        printf("Em percentual: 12 %%\n");
    }
    if (800.00<range && range<=1200.00)
    {
        extra = ((10*range)/100);
        upSalary = range + extra;
        printf("Novo salario: %.2f\n",upSalary);
        printf("Reajuste ganho: %.2f\n",extra);
        printf("Em percentual: 10 %%\n");
    }
    if (1200.00<range && range<=2000.00)
    {
        extra = ((7*range)/100);
        upSalary = range + extra;
        printf("Novo salario: %.2f\n",upSalary);
        printf("Reajuste ganho: %.2f\n",extra);
        printf("Em percentual: 7 %%\n");
    }
    if (2000.00<range)
    {
        extra = ((4*range)/100);
        upSalary = range + extra;
        printf("Novo salario: %.2f\n",upSalary);
        printf("Reajuste ganho: %.2f\n",extra);
        printf("Em percentual: 4 %%\n");
    }
    
    return 0;
}