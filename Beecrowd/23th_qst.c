#include <stdio.h>
int main() 
{
    int x,y;
    scanf("%d %d",&x,&y);
    float cost; 
    float products[]={0.00,4.00,4.50,5.00,2.00,1.50};
    cost = products[x] * y ;
    printf("Total: R$ %.2f\n",cost);
    return 0;
}
    



