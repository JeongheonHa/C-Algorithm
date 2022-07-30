/* A + B - 3 */

#include <stdio.h>

int main()
{
    int A, B;
    int count;
    scanf("%d", &count);

    while (count > 0)
    {
        scanf("%d %d", &A, &B);
        printf("%d\n", A + B);
        --count;
    }

    return 0;
}