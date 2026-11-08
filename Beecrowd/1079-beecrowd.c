#include <stdio.h>
int main() 
{
    int x,sk=0,op=0;
    float  a[1000],avg;
    scanf("%d",&x);
    for (int i = 0; i <x; i++)
    {
        
        scanf("%f %f %f",&a[sk],&a[sk+1],&a[sk+2]);
        sk = sk + 3;
    }
    for (int i =  0; i < x; i++)
    {
        
        avg = ((a[op]*2) + (a[op+1]*3) + (a[op+2]*5))/10.0;
        printf("%.1f\n",avg);
        op = op + 3;
    }
    return 0;
}
    
    
    