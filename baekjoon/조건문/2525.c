/* 오븐 시계 */

#include <stdio.h>

int main()
{
    int A, B, M;

    scanf("%d %d", &A, &B);
    scanf("%d", &M);

    if (B + M >= 60)    
    {
        A +=  (B + M) / 60;
        B = (B + M) % 60;

        if (A >= 24)
        {
            A = A - 24;
        }
        printf("%d %d\n", A, B);
    }
    else
    {
        B = B + M;
        printf("%d %d\n", A, B);
    }

    return 0;
}