#include <stdio.h>
int main() 
{
    int x,num,rabbit=0,rat=0,frog=0,total;
    float prab,prat,pfrog;
    char animal;
    scanf("%d",&x);
    for (int i = 0; i < x; i++)
    {
        scanf("%d %c",&num,&animal);
        if (animal=='C')
        {
            rabbit = rabbit + num;
        }
        else if (animal=='R')
        {
            rat = rat + num;
        }
        else if (animal=='S')
        {
            frog = frog + num;
        }
    }
        total = rabbit + rat + frog ;
        prab = (rabbit * 100.0)/total;
        prat = (rat * 100.0)/total;
        pfrog = (frog * 100.0)/total;
        printf("Total: %d cobaias\n",total);
        printf("Total de coelhos: %d\n",rabbit);
        printf("Total de ratos: %d\n",rat);
        printf("Total de sapos: %d\n",frog);
        printf("Percentual de coelhos: %.2f %%\n",prab);
        printf("Percentual de ratos: %.2f %%\n",prat);
        printf("Percentual de sapos: %.2f %%\n",pfrog);
        
        
    
    return 0;
}