#include <stdio.h>
int main() 
{
    int x=1, y=7;
    for (int i = 0; i < 5; i++)
    {
        printf("I=%d J=%d\n",x,y);
        printf("I=%d J=%d\n",x,y-1);
        printf("I=%d J=%d\n",x,y-2);
        x = x + 2;
        y = y + 2;
    }
    
    return 0;
}