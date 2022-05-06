#include <stdio.h>

int func(int n)	//입력받은 정수 n에 대해 이전의 3개 수를 더하는 재귀함수
{
	if (n == 1)		
		return 0;	//초항을 0으로 설정
	else if (n == 2)
		return 1;	//초깃값이 0이므로 두번째 수 또한 입력해야 한다.
	else if (n == 3)	
		return 2;	//앞에 더할 수가 3개보다 적으므로 3번쨰 수 또한 입력한다.

	else
		return func(n - 1) + func(n - 2) + func(n - 3); //1,2,3번쨰 수가 아닐 시 재귀함수를 통해 앞의 3개 수를 더한값을 다시 함수로 반환한다.
}

int main(void)	
{
	int n;
	printf("몇 번째 수를 확인하겠습니까?:");
	scanf_s("%d", &n);		//사용자로부터 몇 번째 수를 출력할것인지 입력받음

	printf("%d", func(n));	//함수출력
	return 0;
}