#include <stdio.h>

int main()
{
	double a, b, c;		//number to input
	double first, second, third;	//declare another variable to row three number by size
	printf("세 개의 숫자를 입력하세요\n ");
	scanf_s("%lf %lf %lf", &a, &b, &c);		//save number to a, b, c

	if (a >= b)
	{
		if (a >= c)
		{
			if (b >= c)
			{
				first = a, second = b, third = c;		//a>b>c
			}
			else     //b<c

				first = a, second = c, second = b;		//a>c>b
		}
		else       //a>c
			first = c, second = a, third = b;	//c>a>b
	}
	else          //b>a
	{
		if (b >= c)
		{
			if (a >= c)
				first = b, second = a, third = c;		//b>a>c
			else
				first = b, second = c, third = a;		//b>c>a
		}
		else     //c>b
			first = c, second = b, third = a;		//c>b>a			
	}
	double sum = (second * second + third * third);		//declare variable number which is addition of two small number's squared
	double sq = first * first;			//biggest number's squared
	if (first == second && second == third)		//if a=b=c, 정삼각형
		printf("정삼각형입니다.\n");
	else
	{
		if (first >= (second + third))		//if x>=y+z, it's not a triangle
			printf("삼각형이 아닙니다\n");
		else
		{
			if (sq > sum)		//x^2>y^2+z^2
				printf("둔각삼각형입니다.");
			else if (sq == sum)		//x^2=y^2+z^2
				printf("직각삼각형입니다.");
			else               //x^2<y^2+z^2
				printf("예각삼각형입니다.");
		}
	}
}