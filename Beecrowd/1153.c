#include <stdio.h>
int main() 
{
    int x,factorial=1;
    scanf("%d",&x);
    for (int i = 1; i <=x; i++)
    {
        factorial = factorial * i;

    }
    printf("%d\n",factorial);

    return 0;
}
