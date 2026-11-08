#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, d, result1,result2;
    scanf("%lf %lf %lf",&a,&b,&c);
    d = (b*b) - (4*a*c);
    if(a==0 || d<0)
    {
        printf("Impossivel calcular");
    }
    else
    {
       result1 = (- b + pow(d,(1/2.0)))/(2*a);
       result2 = (- b - pow(d,(1/2.0)))/(2*a);
       printf("R1 = %.5lf\nR2 = %.5lf\n",result1,result2);
    }
    return  0;
}
