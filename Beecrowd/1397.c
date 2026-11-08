#include<stdio.h>
int main()
{
    int x;

    while(scanf("%d",&x)&& x!=0)
    {
        int count1 = 0, count2 = 0;
        for (int i = 1; i<=x; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a>b)
        {
           count1 = count1 + 1;
        }
        else if(b>a)
        {
            count2 = count2 + 1;
        }
    }
    printf("%d %d\n",count1,count2);
    }

    return 0;
}
