#include <stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int x,y;
        float divi;
        scanf("%d %d",&x,&y);
        if (y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            divi =(float)x/y;
            printf("%.1f\n",divi);
        } 
            
        
    }
    
    return 0;
}