#include<stdio.h>
int main()
{
   int x, pa, pb, year = 0,hi = 0;
   double g1, g2;
   for(int i = 1;hi < 1; i++)
   {
       scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);
       year = year + 1;
       pa = pa +  ((pa * g1)/100);
       pb = pb +  ((pb * g2)/100);
       if(pa>pb)
       {
           printf("%d",year);
           break ;
       }

   }
}
