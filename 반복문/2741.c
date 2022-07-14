/* N 찍기 */

#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    for (int count = 1; count <= N; ++count)
        printf("%d\n", count);

    return 0;
}