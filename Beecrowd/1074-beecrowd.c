#include <stdio.h>
int main() 
{
    int x,y[10001];
    scanf("%d",&x);
    for (int i = 0; i < x; i++)
    {
        scanf("%d",&y[i]);
        
        
        
        
        
    }
    for (int i = 0; i < x; i++)
    {
        if (y[i]%2==0 && y[i]>0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if (y[i]%2==0 && y[i]<0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if (y[i]%2!=0 && y[i]>0)
        {
            printf("ODD POSITIVE\n");
        }
        else if (y[i]%2!=0 && y[i]<0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if (y[i]==0)
        {
            printf("NULL\n");
        }
    }
    
    
    return 0;
}