#include <stdio.h>
int main() 
{
    int valid=0;
    float x,sum=0,avg,y;
    while (1)
    {
        
        scanf("%f",&x);
        if (0<=x && x<=10)
        {
            valid = valid + 1;
            sum = sum + x;
           if (valid == 2)
           {
                avg = sum/2;
                printf("media = %.2f\n",avg);
            
                while (1)
                {
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%f",&y);
                    if (y==1 || y==2)
                    {
                        break;
                    }
                }    
                if (y==1)
                {
                    valid = 0;
                    sum = 0;
                    avg = 0;
                }
                else if (y==2)
                {
                    break; 
                }
            }
        
        }
    else
    {
        printf("nota invalida\n");
    }
    
    }

return 0;
}      
        
        
                
                
                

            
            
            
                

