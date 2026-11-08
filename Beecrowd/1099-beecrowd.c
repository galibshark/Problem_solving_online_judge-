#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        int x, y, temp;
        int sum = 0; // Prottek test case-er jonno sum 0 kora holo

        scanf("%d %d", &x, &y);

        // x jeno shob shomoy choto ebong y boro hoy
        if (x > y) 
        {
            temp = x;
            x = y;
            y = temp;
        }

        // x ebong y er majhkhane shob bijor shongkha jog kora
        for (int j = x + 1; j < y; j++) 
        {
            if (j % 2 != 0) 
            {
                sum = sum + j;
            }
        }

        // Loop shesh howar por ekbar print kora
        printf("%d\n", sum);
    }

    return 0;
}