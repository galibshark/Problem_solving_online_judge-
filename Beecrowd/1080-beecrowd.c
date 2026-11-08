#include <stdio.h>
int main() 
{
    int highest=0,position,input;
    for (int i = 1; i<=100; i++)
    {
        scanf("%d",&input);
        if (input>highest)
        {
            highest = input ;
            position = i;
        }
    }
    printf("%d\n",highest);
    printf("%d\n",position);
    return 0;
}
    
        
    
    
    