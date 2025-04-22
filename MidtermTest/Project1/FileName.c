#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pf()
{
	printf("pf");
	return 0;
}

int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d", a * b);
	pf();
	pf();
	return 0;
}