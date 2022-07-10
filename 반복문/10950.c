/* A + B - 3 */

#include <stdio.h>

int main()
{
    int A, B;
    int count;
    int i = 0;
    int sum[] = A + B;
    
    while(1)
    {
        scanf("%d", &count);
        scanf("%d %d", &A, &B);
        --count;
        if (count < 0)
            break;
    } 
    while (1)
    {
        int i = 0;
        printf("%d\n", sum[i]);
        ++i;

        if (i == 0)
            break;
    }

    return 0;
}