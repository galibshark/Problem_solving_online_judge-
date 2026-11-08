#include <stdio.h>
int main() 
{
    float x, taxApply,tax;
    scanf("%f",&x);
    if (0<x && x<=2000)
    {
        printf("Isento\n");
    }
    else if (2000<x && x<=3000)
    {
        taxApply =  x-2000;
        tax = (8*taxApply)/100;
        printf("R$ %.2f\n",tax);

    }
    else if (3000<x && x<=4500)
    {
        taxApply= x-3000;
        tax = 80+ ((taxApply*18)/100);
        printf("R$ %.2f\n",tax);
    }
    else if (4500<x)
    {
        taxApply= x-4500;
        tax = 80+270+((taxApply*28)/100);
        printf("R$ %.2f\n",tax);
    }
    
    
    
    return 0;
}