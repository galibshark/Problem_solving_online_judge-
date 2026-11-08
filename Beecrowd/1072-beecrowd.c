#include <stdio.h>
int main() 
{
    int x,count_in=0,count_out=0,y[10001];
    scanf("%d",&x);
    for (int i = 0; i < x; i++)
    {
        scanf("%d",&y[i]);
        if (10<=y[i] && y[i]<=20)
        {
            count_in =  count_in + 1;
        }
        else if (y[i]<10 || y[i]>20)
        {
            count_out = count_out +1;
        }
    }
    printf("%d in\n",count_in);
    printf("%d out\n",count_out);
    return 0;
}        
        

    

        
            
        
        