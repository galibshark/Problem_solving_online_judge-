#include <stdio.h>
int main()
{
     float  x=0,y=1;

    for (int i = 0; i<=10; i++)
    {


            if(i==0 || i==5 || i==10){
            printf("I=%.0f J=%.0f\n",x,y);
            printf("I=%.0f J=%.0f\n",x,y+1);
            printf("I=%.0f J=%.0f\n",x,y+2);
            }
            else
            {
                printf("I=%.1f J=%.1f\n",x,y);
                printf("I=%.1f J=%.1f\n",x,y+1);
                printf("I=%.1f J=%.1f\n",x,y+2);
            }
            y = y + 0.2;
            x = x + 0.2;

    }

    return 0;
}
