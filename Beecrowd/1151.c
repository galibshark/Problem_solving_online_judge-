#include <stdio.h>
int main()
{
    int a=0,b=1,next,x;
    scanf("%d",&x);
    for (int i = 1; i <= x; i++)
    {
        if(i==x)
        {
            printf("%d",a);
        }
        else{
            printf("%d ",a);
            next = a + b;
            a = b;
            b = next;
        }

    }
    printf("\n");
    return 0;
}
