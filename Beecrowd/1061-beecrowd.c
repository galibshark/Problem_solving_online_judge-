#include <stdio.h>
int main() 
{
    int day[3],hour[2],min[2],second[10];
    
    scanf("Dia %d\n",&day[0]);
    scanf("%d : %d : %d\n",&hour[0],&min[0],&second[0]);
    scanf("Dia %d\n",&day[1]);
    scanf("%d : %d : %d",&hour[1],&min[1],&second[1]);
    
    
    second[2] =(day[0]*86400) + (hour[0]*3600) + (min[0]*60) + second[0];
    second[3] =(day[1]*86400) + (hour[1]*3600) + (min[1]*60) + second[1];
    second[4]=(second[3]-second[2]);
    day[2]=second[4]/86400;
    second[5]= second[4]-(day[2]*86400);
    hour[2]=second[5]/3600;
    second[6]= second[5]-(hour[2]*3600);
    min[2]=second[6]/60;
    second[7]=second[6]-(min[2]*60);
    printf("%d dia(s)\n",day[2]);
    printf("%d hora(s)\n",hour[2]);
    printf("%d minuto(s)\n",min[2]);
    printf("%d segundo(s)\n",second[7]);
    
    
    
    
    return 0;
}
    