/* 구구단 */

#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    for (int count = 1; count <= 9; count++)
    {
        printf("%d * %d = %d\n", N, count, count * N);
    }
    return 0;
}