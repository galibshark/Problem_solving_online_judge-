#include <stdio.h>
int main() 
{
    int x,pow;
    scanf("%d",&x);
    for (int i = 2; i <=x; i++)
    {
        if (i%2==0)
        {
            pow = i * i;
            printf("%d^2 = %d\n",i,pow);
        }
        
        
    }
    
    return 0;
}