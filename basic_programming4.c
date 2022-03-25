#include <stdio.h>

int main()
{
	int num1;
	int num2;
	printf("input number a, b:");							//text that requiring input a and b
	scanf_s("%d %d", &num1, &num2);							//we can input a and b what we want to calculate
	printf("%d + %d = %d\n", num1, num2, num1 + num2);		//+
	printf("%d - %d = %d\n", num1, num2, num1 - num2);		//-
	printf("%d x %d = %d\n", num1, num2, num1 * num2);		//*

	return 0;
}