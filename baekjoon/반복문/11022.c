/* A + B - 8 */

#include <stdio.h>

int main()
{
    int A, B, T;
    
    scanf("%d", &T);

    for (int count = 1; count <= T; ++count)
    {
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d + %d = %d\n", count, A, B, A + B);
    }

    return 0;
}