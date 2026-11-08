#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int count = 0;
        for (int j = x; count < y; j++)
        {

            if (j % 2 != 0)
            {
                count = count + 1;
                sum = sum + j;
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}
