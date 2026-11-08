#include <stdio.h>
int main() 
{
    while (1)
    {
        int x,y,temp,sum=0;
        scanf("%d %d",&x,&y);
        if (x==0 || y==0 || x<0 || y<0)
        {
            break;
        }
        
        if (x>y)
        {
            temp = x;
            x=y;
            y=temp;
        }
        for (int i = x; i <=y; i++)
        {
            printf("%d ",i);
            sum = sum + i;
        }
        printf("Sum=%d\n",sum);
    }
    
    return 0;
}