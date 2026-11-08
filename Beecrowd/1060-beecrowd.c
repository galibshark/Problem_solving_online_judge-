#include <stdio.h>
int main() 
{
    float a[8],count=0;
    scanf("%f",&a[0]);
    scanf("%f",&a[1]);
    scanf("%f",&a[2]);
    scanf("%f",&a[3]);
    scanf("%f",&a[4]);
    scanf("%f",&a[5]);
    for (int i = 0; i < 6; i++)
    {
        if (a[i]>0)
        {
            count=1+count;
        }
    }
    printf("%.0f valores positivos\n",count);
    return 0;
}
            
        