#include<stdio.h>
int main()
{
    int b,x[20],minimum,count;
    scanf("%d",&b);
    for(int i=0;i<b;i++)
    {
        scanf("%d",&x[i]);
    }
    minimum = x[0];
    for(int i = 1;i<b;i++)
    {
        if(x[i]<minimum)
        {
            minimum = x[i];
            count = i;
        }
    }
    printf("minimum %d\n",minimum);
    printf("serial %d\n",count);
}
