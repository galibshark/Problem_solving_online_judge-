#include<stdio.h>
int main()
{

   int taka,x,y;
   scanf("%d.%d",&x,&y);
   taka = x/100;
   printf("NOTAS:\n");
   printf("%d nota(s) de R$ 100.00\n",taka);
   x = x - (100*taka);
   taka = x/50;
   printf("%d nota(s) de R$ 50.00\n",taka);
   x = x - (taka*50);
   taka = x/20;
   printf("%d nota(s) de R$ 20.00\n",taka);
   x =  x - (taka*20);
   taka = x/10;
   printf("%d nota(s) de R$ 10.00\n",taka);
   x =  x - (taka*10);
   taka =x/5;
   printf("%d nota(s) de R$ 5.00\n",taka);
   x =  x - (taka*5);
   taka =x/2;
   printf("%d nota(s) de R$ 2.00\n",taka);
   printf("MOEDAS:\n");
   x =  x - (taka*2);
   taka =x/1;
   printf("%d moeda(s) de R$ 1.00\n",taka);
   taka = y/50;
   printf("%d moeda(s) de R$ 0.50\n",taka);
   y = y - (50*taka);
   taka = y/ 25;
   printf("%d moeda(s) de R$ 0.25\n",taka);
   y = y - (25*taka);
   taka = y/ 10;
   printf("%d moeda(s) de R$ 0.10\n",taka);
   y = y - (10*taka);
   taka = y/ 5;
   printf("%d moeda(s) de R$ 0.05\n",taka);
   y = y - (5*taka);
   taka = y/ 1;
   printf("%d moeda(s) de R$ 0.01\n",taka);
   return 0;
}
