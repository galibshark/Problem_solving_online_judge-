#include<stdio.h>
int main()
{
    int x, y;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        long long int sum = 1,sum1 = 1;
        for(int i=1; i<=x; i++)
        {
            sum = sum * i;
        }
        for(int j=1; j<=y; j++)
        {
            sum1 = sum1 * j;
        }
        sum = sum + sum1;
        printf("%lld\n",sum);
    }
    return 0;
}
