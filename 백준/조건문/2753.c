/* 윤년 */

#include <stdio.h>

int main()
{
    int y;

    scanf("%d", &y);
    if (y >= 1 && y <= 4000)
    {
        if (y % 4 == 0)
        {
            if (y % 100 != 0 || y % 400 == 0)
            printf("1\n");
            else
            printf("0\n");
        }
        else
            printf("0\n");
    }
    
    return 0;
}