#include <stdio.h>
int main() 
{
    float a, b, c,perimeter,area;
    scanf("%f %f %f",&a,&b,&c);
    perimeter=a+b+c;
    area=(1/2.0) *(a+b)*c;
    if ((b+c)>a && (a+c)>b && (b+a)>c)
    {
        printf("Perimetro = %.1f\n",perimeter);
    }
    
    else
    {
        printf("Area = %.1f\n",area);
    }
    
    return 0;
}