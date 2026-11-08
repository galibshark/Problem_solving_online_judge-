#include <stdio.h>
#include<stdlib.h>
int main() 
{
    int x,y,z,m, xt,yt,zt,mt,min,hour,minute;
    scanf ("%d %d %d %d",&x,&z,&y,&m);
    if (x==y && z<m)
    {
        min = m-z;
        printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",min);
    }
    else if (x==y && z>m)
    {
        min = 60 - z + m;
        printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",min);
    }
    else if (x==y && z==m)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
        
    
    else if (x>y)
    {
        min = (24*60) -(((x*60)+z)-((y*60)+m));
        hour  =  min/60.0;
        minute = min - ((min/60)*60);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minute);
    }
    
    else if(y>x)
    {
        min = abs(((x*60)+z) - ((y*60)+m));
        hour  =  min/60.0;
        minute = min - ((min/60)*60);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minute);
    }
    return 0;
}

    
    
    
    
    
    