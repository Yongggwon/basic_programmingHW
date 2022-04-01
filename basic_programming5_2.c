#include <stdio.h>

int main()
{
	char x = 0;		
	char y = 0;			//declare two variables what we want to calculate
	double n = 0;
	double m = 0;		//sice we cannot calculate text data, declare variale 'double' to change text to number

	printf("두 수를 입력하세요:");		
	scanf_s("%c", &x);
	scanf_s(" %c", &y);		//input two number to calculate
	n = x-48;
	m = y-48;				//by ascii code, we can take '-48' to text to change for number data
	printf("덧셈: %f\n", n + m);		//addition
	printf("뺄셈: %f\n", n - m);		//subtraction
	printf("곱셈: %f\n", n * m);		//multiplication
	printf("나눗셈: %f\n", n/ m);		//division

	return 0;
}