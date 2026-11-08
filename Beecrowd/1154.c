#include <stdio.h>
int main() 
{
    float age = 0,count = 0 ;
    while (1)
    {
        int x;
        scanf("%d",&x);
        if (x<=0)
        {
            break;
        }
        else 
        {
            count = count + 1;
            age = x + age;
        }
        
        
    }
    float avg = age/count;
    printf("%.2f\n",avg);

    return 0;
}