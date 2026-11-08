#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        printf("Ho");
        if(i<x)
        {
            printf(" ");
        }
        else
        {
            printf("!\n");
        }
    }
    return 0;
}
