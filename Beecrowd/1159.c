#include<stdio.h>
int main()
{
    int x;
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
        {

            break;
        }
        else
        {
            int count = 0, sum = 0;

            for(int i = x; count < 5; i++)
            {
               if(i%2==0)
               {
                   sum = sum + i;
                   count = count + 1;
               }
            }
            printf("%d\n",sum);
            sum = 0;
            count = 0;
        }

    }
    return 0;
}


