#include <stdio.h>
int main()
{
	int a, b, c;
	printf("%c %c", "a=","b=");
	scanf("%d %d", a, b);
	c = a % b;
	printf("%d\n", c);
	return 0;
}