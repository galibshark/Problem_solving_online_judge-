#include <stdio.h>
int main() 
{
    int x,y,temp,sum=0;
    scanf("%d",&x);
    scanf("%d",&y);
    if (x>y)
    {
        temp=x;
        x=y;
        y=temp;
    }
    
   
    
   for (int i = x+1; x<i && i<y ; i++)
    {
        if (i%2!=0)
        {
          sum = sum + i;
        }
    }
   
   printf("%d\n",sum);     
        
    
   
     
    
    
    return 0;
}