#include <stdio.h>
int main()
{
	int x, y;
	printf("\n enter the value for x:");
	scanf("%d",&x);
	printf("\n enter the value for y:");
	scanf("%d",&y);

	
	x = x + y;
	y = x - y;
	x = x - y;

	printf("After Swapping: x = %d, y = %d", x, y);

	return 0;
}
