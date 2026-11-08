#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,z,b,count=0;
    scanf("%d",&x);
    for(int i = 1; i<=x; i++)
    {
        scanf("%d %d",&y,&z);
        scanf("%d",&b);
        b = abs(z-b);
        count = 1;

        for(int j = 2; j<=y;j++)
        {
            int a,c;
            scanf("%d",&a);
            c = abs(z - a);
            if(b>c)
            {
                b=c;
                count = j;
            }

        }
        printf("%d\n",count);
    }
    return 0;
}
