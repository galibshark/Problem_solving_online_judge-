#include <stdio.h>

int main() 
{
    double a,b,c,temp;
    scanf("%lf %lf %lf",&a,&b,&c);
    
    if (a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if (a<c)
    {
        temp=a;
        a=c;
        c=temp;
    }
    if (b<c)
    {
        temp=b;
        b=c;
        temp=b;
    }
    if (a>=(b+c))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if ((a*a)==(b*b)+(c*c))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if (a*a>b*b+c*c)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if (a*a<b*b+c*c)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        
        
        
    }
    
        

        
        
    
    
    
    
    return 0;
}