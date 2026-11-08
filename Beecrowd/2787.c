#include<stdio.h>
int main()
{
    int x,y,sum;
    scanf("%d\n%d",&x,&y);
    sum = x+y;
    if(sum%2==0)
    {
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    return 0;
}
