/* * 찍기 - 2 */

#include <stdio.h>

int main()
{
    int N;
    int const c = '*';
    int i, j = 0;
    int k;

    scanf("%d", &N);

    for (i = 1; i <= N; ++i)    // 행 변환
    {
        ++j;
        for (k = 0; j < N - k; ++k) // 열 변환
        {
            printf(" ");
        }
        while (k < N)
        {
            printf("%c", c);
            ++k;
        }
        printf("\n");
    }
    return 0;
}

// 풀이 과정
// 행 변환을 할 수 있게 첫번째 for문을 이용
// 열 변환을 할 수 있게 두번째 for문을 이용
// 열 변환하는 과정에서 빈칸과 *을 나눠서 표현하기로 결정
// for문에서 k변수를 추가해서 N에서 줄어든 빈칸을 표현 (빈칸과 *의 경계)
// while문에서 줄어든 k만큼 *을 늘리도록 표현
// 행 변환 과정에서 빈칸의 수를 행 변환 횟수에 따라 바뀌게 하기위해 행 변환 바깥에 ++j