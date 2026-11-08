#include <stdio.h>
int main() 
{
    int x,y,xt,yt;
    scanf ("%d %d",&x,&y);
    if (x>y)
    {
        xt = 24 - (x-y);
        printf("O JOGO DUROU %d HORA(S)\n",xt);
    }
    else if (x<y)
    {
        yt = y - x;
        printf("O JOGO DUROU %d HORA(S)\n",yt);
    }
    else if (x==y)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    return 0;
}
    
    
    