#include <stdio.h>

int main()
{
	char x=0;		//declare x : what we want to change to capital
	int i = 0;   //declare integer i to count number of executions
	while (i < 5)    //반복문 선언: 5번 반복
	{
		printf("소문자 입력:");
		scanf_s(" %c", &x);	//input small letter alphabet 
		if (x >= 'a' && x <= 'z')  //조건문 선언: 입력한 값이 소문자여야 함
		{
			printf("대문자 : %c\n", x - 32);  //by ascii code, capital's code value is 'small letter - 32'
			i++;   //counting number of executions
		}
	}
	return 0;
}