/* 두 수 비교 */

#include <stdio.h>

int main()
{
    double A, B;

    scanf("%lf%lf", &A, &B);
    if (A >= -10000 && B <= 10000)
    {
        if (A > B)
            printf(">\n");
        else if (A < B)
            printf("<\n");
        else if (A == B)
            printf("==\n");
    }
    return 0;
}