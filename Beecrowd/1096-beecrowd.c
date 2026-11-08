#include <stdio.h>
int main() 
{
    int x=1;
    for (int i = 0; i < 5; i++)
    {
        printf("I=%d J=7\n",x);
        printf("I=%d J=6\n",x);
        printf("I=%d J=5\n",x);
        x= x + 2;
    }
    
    return 0;
}