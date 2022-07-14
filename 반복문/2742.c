/* 기찍 N */

#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    for (int count = 1; count <= N; N--)
        printf("%d\n", N);

    return 0;
}