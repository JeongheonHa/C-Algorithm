/* 알람 시계 */

#include <stdio.h>

int main()
{
	int h, m;
	
	scanf("%d %d",&h,&m);
	
	if(m-45<0)
	{
		h=h-1;
		if(h<0)
			h=23;
		m=m+15;
	}
		
	else if(m-45 >= 0)
		m=m-45;
	
	printf("%d %d",h,m);
	
	return 0;
}