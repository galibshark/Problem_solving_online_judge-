#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int x,y,result;
    while(scanf("%lld %lld",&x,&y)!=EOF)
    {
        result = llabs(y - x);
        printf("%lld\n",result);
    }
    return 0;
}
