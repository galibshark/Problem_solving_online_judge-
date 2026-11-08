#include <stdio.h>
int main()
{
    int inter = 0, gremio = 0, y;
    while (1)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            inter = inter + 1;
        }
        else if (b > a)
        {
            gremio = gremio + 1;
        }
        while (1)
        {
            
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &y);
            if (y == 1 || y == 2)
            {
                break;
            }
        }
        if (y == 2)
        {
            printf("%d grenais\n", inter + gremio);
            printf("Inter:%d\n", inter);
            printf("Gremio:%d\n", gremio);

            if (inter == gremio)
            {
                printf("Empates:%d\n", gremio);
            }
            else
            {
                printf("Empates:0\n");
            }
            if (inter > gremio)
            {
                printf("Inter venceu mais\n");
            }
            else
            {
                printf("Gremio venceu mais\n");
            }
            break;
        }
    }

    return 0;
}
