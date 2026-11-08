#include <stdio.h>
int main()
{
    int x, y, temp, sum = 0;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    for (int i = x; i <= y; i++)
    {
        if (i % 13 != 0)
        {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);

    return 0;
}