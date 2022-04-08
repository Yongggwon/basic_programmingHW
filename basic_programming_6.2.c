#include <stdio.h>

int main()
{
	double a, b, r, x, y;		//원의 방정식 : (x-a)^2+(x-b)^2 = r^2
	
	printf("원의 중심의 x,y 좌표를 입력하시오:");
	scanf_s("%lf %lf", &a, &b);
	printf("원의 반지름을 입력하세요:");
	scanf_s("%lf", &r);
	printf("판단할 점의 좌표를 입력하시오:");
	scanf_s("%lf %lf", &x, &y);			//require a, b, r, x ,y 

	double result_x = (x - a) * (x - a);		//squared of x-a
	double result_y = (y - b) * (y - b);		//squared of y-b

	if (result_x + result_y <= r * r)		//compare the result of left hand and right hand of 원의방정식 
		printf("(%f,%f)는 원 안에 존재합니다.", x, y);		
	else
		printf("(%f,%f)는 원 안에 존재하지 않습니다.", x, y);

}