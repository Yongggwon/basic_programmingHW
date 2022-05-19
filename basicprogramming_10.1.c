#include <stdio.h>
#define SIZEx 4		
#define SIZEy 4		//배열의 크기 지정

void change(int *pa, int *pb)		//배열 두개를 매개변수로 받는 함수이다.
{
	int z, i;		//z는 배열의 원소교환을 위한 제 3의 정수형 변수
	
	if (SIZEx == SIZEy)		//배열의 사이즈가 같아야만 함수 실행
	{
		for (i = 0; i < SIZEx; i++)	//배열의 크기만큼 반복
		{
			z = *(pa + i);	//a를 z로, b를 a로, z를 b로 저장하면 a, b맞교환됨
			*(pa + i) = *(pb + i);
			*(pb + i) = z;		//+i를 통해 각 배열의 index가 같은 원소끼리 교환함
		}
		printf("바뀐 배열 a는 %d %d %d %d \n", *(pa), *(pa + 1), *(pa + 2), *(pa + 3));
		printf("바뀌 배열 b는 %d %d %d %d \n", *(pb), *(pb + 1), *(pb + 2), *(pb + 3));		//바뀐 배열 출력
	}
	else
		printf("배열의 크기가 다릅니다.");		//사이즈가 다르면 출력할 메세지
}
int main(void)
{
	int a[SIZEx] = { 1,2,3,4 };
	int b[SIZEy] = { 5,6,7,8 };

	change(a, b);
}
