#include <stdio.h>
int main()
{
    float result = 1,multi = 1;
    for ( int i = 1; i<=19; i++)
    {
       multi = multi * 2;
       result = result + (2*i+1)/multi;
    }
    printf("%.2f\n",result);

    return 0;
}
