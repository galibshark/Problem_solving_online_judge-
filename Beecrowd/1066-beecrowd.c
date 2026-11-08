#include <stdio.h>
int main() 
{
    int a[8],even=0,odd=0,pos=0,neg=0;
    for (int i = 0; i < 5 ; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i]%2==0)
        {
            even = even + 1;
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i]%2!=0)
        {
            odd = odd + 1;
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i]>0)
        {
            pos = pos + 1;
        }
        
    }
    for (int  i = 0; i < 5; i++)
    {
        if (a[i]<0)
        {
            neg = neg + 1;
        }
         
    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);
    return 0;
}    
    
    
    
