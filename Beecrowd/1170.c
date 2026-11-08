#include<stdio.h>
int main()
{
    int day,ct = 0;
    scanf("%d",&day);
    for(int i=1; i<=day;i++)
    {

       float  m;
       scanf("%f",&m);
       for(int j=1;j<=1000;j++)
       {
           m = m / 2.0 ;
           ct = ct + 1;
           if(1>m || m==1)
           {
               break;
           }

           printf("%.0f kg\n",m);
       }
       printf("%d dias\n",ct);
       ct =0;
    }
    return 0;
}
