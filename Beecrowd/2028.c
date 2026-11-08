#include<stdio.h>
int main()
{
int a, count= 0;
    while(scanf("%d",&a)!=EOF)
    {
        int ct = 0;
        count = count + 1;
        if (a==0)
        {
            printf("Caso %d: %d numero\n",count,ct+1);
            printf("0\n\n");
        }
        else
        {
            for(int i = 1; i<=a ; i++)
            {
                for(int j = 1; j<=i; j++)
                {
                    ct = ct + 1;
                }
            }
            printf("Caso %d: %d numeros\n",count,ct+1);
            printf("0");       
            for(int i = 1; i<=a ; i++)
            {
                for(int j = 1; j<=i; j++)
                {
                    printf(" %d",i);
                }
            }
            printf("\n\n")
        }  
    }
    return 0;
}
