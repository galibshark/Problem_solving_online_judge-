#include <stdio.h>
int main() 
{
    int x, z, sum=0,count=0;
    scanf("%d",&x);
    scanf("%d",&z);
    while (z<=x)
    {
        scanf("%d",&z);
    }
    if (z>x)
    {
        for (int i = 0; i < z; i++)
        {
            count = count + 1;
            sum = x + i + sum;
            if (sum>z)
            {
                printf("%d\n",count);
                break;
            }
            
        }
    }
    
    
    
    
    return 0;
}