#include<stdio.h>
int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
       int sup = 0, d
       for(int i = 2; i<x; i++)
       {
           if(x%i==0)
           {
               sup = 1;

           }
       }
       for(i=2;i<d;i++)
           {
               d = x % 10;
               x = x / 10;
               if(d%i==0)
               {
                   prime =  1;
               }


           }
    }
}
