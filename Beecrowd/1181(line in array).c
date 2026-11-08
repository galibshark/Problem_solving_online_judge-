#include<stdio.h>
int main()
{
    int serial,i,j;
    char t;
    float m[12][12],sum=0;
    scanf("%d\n",&serial);
    scanf("%c",&t);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%f\n",&m[i][j]);
        }
    }
    for(int i=0;i<12;i++)
    {
        sum = sum + m[serial][i];
    }
    if(t=='S')
    {
        printf("%.1f\n",sum);
    }
    else if(t=='M')
    {
        printf("%.1f\n",sum/12.0);
    }
    return 0;
}
