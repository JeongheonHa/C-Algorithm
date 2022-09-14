/* 곱셈 */

#include <stdio.h>

int main()
{
    int x, y;
    int p1, p2, p3, p4;
    
    scanf("%d%d", &x, &y);

    p1 = x * ((y % 100) % 10); 
    p2 = x * ((y % 100) - ((y % 100) % 10)) / 10;
    p3 = x * ((y - (y % 100)) / 100); 
    p4 = x * y;

    printf("%d\n", p1);
    printf("%d\n", p2);
    printf("%d\n", p3);
    printf("%d\n", p4);

    return 0;
}