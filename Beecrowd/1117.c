#include <stdio.h>
int main() 
{
    float x,sum=0,avg;
    int valid=0;
    while (1)
    {
        scanf("%f",&x);
        if (x>=0 && x<=10)
        {
            valid = valid + 1;
            sum = sum + x;
            if (valid==2)
            {
                avg = sum / 2;
                printf("media = %.2f\n",avg);
                break;
            }
        }
        else
        {
            printf("nota invalida\n");
        }
        
        
    }
    
    return 0;
}