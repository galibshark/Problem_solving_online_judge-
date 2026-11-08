#include <stdio.h>
int main() 
{
    float x = 100,result = 0;
    for (float i = 1; i<=x ; i++)
    {
        result = result + 1/i;
    }
    printf("%.2f\n",result);

    return 0;
}