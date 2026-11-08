#include <stdio.h>
int main() 
{
    float a[7],count=0,sum=0,avg;
    scanf("%f\n%f\n%f\n%f\n%f\n%f",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
    for (int i = 0; i < 6; i++)
    {
        if (a[i]>0)
        {
            count = count + 1;
            sum = sum + a[i];
        }
    }
    avg = sum /count;
    printf("%.0f valores positivos\n",count);
    printf("%.1f\n",avg);
    return 0;
}        
     
    
