#include <stdio.h>
int main()
{
    
    int al = 0, gas = 0, die = 0;
    while (1)
    {
        int x;
        scanf("%d", &x);
        if (x == 1)
        {
            al = al + 1;
        }
        else if (x == 2)
        {
            gas = gas + 1;
        }
        else if (x == 3)
        {
            die = die + 1;
        }
        else if (x == 4)
        {
            break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", al);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", die);

    return 0;
}
