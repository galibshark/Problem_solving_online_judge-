#include<stdio.h>
int main()
{
    int t =0,x;
    int str;

    while(1)
    {
        scanf("%d",&x);
        if(str=='1')
        {
            break;
        }
        for(int i=1; i<=x; i=(2*t)+1 )
        {
            for(int j = i;j<x;j++)
            {
                if(j%2!=0)
                {
                    printf(" ");
                }

            }
            for(int k=0;k<i;k++)
            {
                printf("*");
            }
            printf("\n");
            t=t+1;
        }
        t=0;
        for(int i=1; i<=x; i=(2*t)+1 )
        {
            for(int j = i;j<x;j++)
            {
                if(j%2!=0)
                {
                    printf(" ");
                }

            }
            for(int k=0;k<i;k++)
            {
                printf("*");
            }
            printf("\n");
            t=t+1;
            if(i==3)
            {
                break;
            }
        }
        t=0;
        printf("\n\n");

    }

    return 0;
}
