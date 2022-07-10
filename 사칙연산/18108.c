/* 1998년생인 내가 태국에서는 2541년생?! */

#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d", &y);
    x = y - (2541 - 1998);
    printf("%d\n", x);
    return 0;
}