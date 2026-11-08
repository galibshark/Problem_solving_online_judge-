/*
In this problem you have to read an integer value and 
calculate the smallest possible number of banknotes in which 
the value may be decomposed. The possible banknotes are 
100, 50, 20, 10, 5, 2 and 1. Print the read value and the list of 
banknotes.
Input
The input file contains an integer value N (0 < N < 1000000).

Output
Print the read number and the minimum quantity of each necessary 
banknotes in Portuguese language, as the given example. 
Do not forget to print the end of line after each line, otherwise 
you will receive “Presentation Error”.
*/
#include <stdio.h>
int main() 
{
    int num,nota[15],first;
    scanf("%d",&num);
    nota[0] = num / 100;
    nota[1] = num % 100;
    nota[2] = (nota[1]) / 50;
    nota[3] = (nota[1]) % 50;
    nota[4] = (nota[3]) / 20;
    nota[5] = (nota[3]) % 20;
    nota[6] = (nota[5]) / 10;
    nota[7] = (nota[5]) % 10;
    nota[8] = (nota[7]) / 5;
    nota[9] = (nota[7]) % 5;
    nota[10] = (nota[9]) / 2;
    nota[11] = (nota[9]) % 2;
    nota[12] = (nota[11]) / 1;
    nota[13] = (nota[11]) % 1;
    printf("%d\n",num);
    printf("%d nota(s) de R$ 100,00\n",nota[0]);
    printf("%d nota(s) de R$ 50,00\n",nota[2]);
    printf("%d nota(s) de R$ 20,00\n",nota[4]);
    printf("%d nota(s) de R$ 10,00\n",nota[6]);
    printf("%d nota(s) de R$ 5,00\n",nota[8]);
    printf("%d nota(s) de R$ 2,00\n",nota[10]);
    printf("%d nota(s) de R$ 1,00\n",nota[12]);
    return 0;
}
