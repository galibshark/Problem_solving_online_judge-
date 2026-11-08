#include<stdio.h>
int main()
{
    int x,y,sum=0;
    scanf("%d",&x);
    for(int i=1; i<=x; i++)
    {
        scanf("%d",&y);
        for(int j=1; j<=y; j++)
        {
            if(y%j==0)
            {
                sum = sum + 1;
            }
        }
        if(sum==2)
        {
            printf("%d eh primo\n",y);
        }
        else
        {
            printf("%d nao eh primo\n",y);
        }
        sum = 0;
    }
}
