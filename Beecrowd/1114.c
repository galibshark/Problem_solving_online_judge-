#include <stdio.h>
int main() 
{
    int x=2002;
    while (1)
    {
        int y;
        scanf("%d",&y);
        if (y==x)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else 
        {
            printf("Senha Invalida\n");
        }
        
    }
    
    return 0;
}