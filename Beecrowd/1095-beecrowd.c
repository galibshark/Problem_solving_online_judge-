#include <stdio.h>
int main() 
{
    int x=1,y=60;
    for (int i = 1; i < 14; i++)
    {
        printf("I=%d J=%d\n",x,y);
        x = x + 3;
        y = y - 5;
    }
    
    return 0;
}