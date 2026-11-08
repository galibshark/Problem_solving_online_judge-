#include <stdio.h>
int main() 
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if (x<y && x<z)
    {
        printf("%d\n",x);
    }
    else if (y<x && y<z)
    {
        printf("%d\n",y);
    }
    else 
    {
        printf("%d\n",z);
    }
    
    if ((x>y && x<z) || (x>z && x<y))
    {
        printf("%d\n",x);
    }
    else if ((y>x && y<z) || (y>z && y<x))
    {
        printf("%d\n",y);
    }
    else
    {
        printf("%d\n",z);
    }
    
    
    if (x>y && x>z)
    {
        printf("%d\n\n",x);
    }
    else if (y>x && y>z)
    {
        printf("%d\n\n",y);
    }
    else 
    {
        printf("%d\n\n",z);
    }
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);
    return 0;
}
    
    
    
    
    

    