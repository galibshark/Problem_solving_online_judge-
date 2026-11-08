#include <stdio.h>
int main() 
{
    int a[7],count=0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i]%2==0)
        {
            count = count + 1;
        }
        
    }
    printf("%d valores pares\n",count);
    
    return 0;
}