#include<stdio.h>
int main()
{
	int a, b;
	printf("a=");
	scanf_s("%d", &a);
	printf("b=");
	scanf_s("%d", &b);
	
	
	int c = a % b;
	printf("c=%d\n", c);






	return 0;
}