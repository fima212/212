

#include "pch.h"
#include <iostream>
#include <stdio.h>

int main()
{
	int a;
	int b;
	scanf("%d %d", &a, &b);
	printf("%d", f1(a, b));
	printf("%d", f2(a, b));
	printf("%d", f3(a, b));
	printf("%f", f4(a, b));
}

int f1(int a,int b)
{
	return a + b;
}
int f2(int a, int b)
{
	return a - b;
}
int f3(int a, int b)
{
	return a * b;
}
float f4(float a, float b)
{
	return a / b;
}