#include<stdio.h>
int main()
{
   int x,a=0;
   scanf("%d",&x);
   for(int i=0; i<10; i++)
   {
       printf("N[%d] = %d\n",i,a);
       a = a + 1;
       if(a==x)
       {
           a=0;
       }
   }
}
