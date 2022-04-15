#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	int i, j;
	

	printf("몇 줄을 찍으시겠습니까?:");
	scanf_s("%d", &n);

	for (i = 0;i < n;i++)		//세로줄에 대한 반복문
	{
		for (j = i; j < n - 1;j++)		//가로줄의 칸 번호가 총 세로줄의 수-1과 같아지기 전까지 반복
		{
			printf(" ");		//공백 입력(n-1-i번)
		}
		for (j = 0;j <= (i * 2);j++)		//가로가 세로길이의 두배일때까지 *입력
		{
			printf("*");		//*입력, j=0부터 2i까지이므로 2i+1번 입력
		}
		printf("\n");		//다음줄로 이동, 반복문 i<n까지 다시실행
	}		//윗부분의 삼각형
	printf("\n\n");
	for (i = n - 1;i >= 0;i--)
	{
		for (j = i;j < n - 1;j++)
		{
			printf(" ");
		}
		for (j = 0;j <= i * 2;j++)
		{
			printf("*");
		}
		printf("\n");
	}		//아랫부분 삼각형 : 위의 코드를 거꾸로 실행한다고 생각하면 된다.
	printf("\n\n");
	
	int m = n / 2;

	switch (n % 2) {		//n을 2로 나누어 별을 출력할 것이다. 그러나 n이 홀수이면 n/2는 실수형 변수가 되어 소숫점 아래 수가 버려진다. 따라서 case를 나누자. 나머지를 통해 홀, 짝수를 구분한다.
	case 0:			//짝수
		for (i = 0;i < m - 1;i++)		//다이아몬드의 윗부분, 위의 피라미드 모양보다 한줄 덜 출력하면 된다. 아래 피라미드와 겹치는 줄이 생기면 안되기 때문이다.
		{								//따라서 m-1줄만큼 출력하겠다. 
			for (j = i;j < n - 1;j++)
			{
				printf(" ");
			}
			for (j = 0;j <= 2 * i;j++)
			{
				printf("*");
			}
			printf("\n");
		}

		for (i = m - 1;i >= 0;i--)		//다이아몬드의 아랫부분, 위의 역삼각형 모양과 동일하게 생각하면 된다.
		{

			for (j = i;j < n - 1;j++)
			{
				printf(" ");
			}
			for (j = 0;j <= i * 2;j++)
			{
				printf("*");
			}
			printf("\n");
			
		}
		break;		//case 0에서의 탈출

	case 1:				//나머지가 1, 즉, 홀수인 경우
		for (i = 0;i < m;i++)		//예를 들어, m이 5라고 하자. 그렇다면 m에는 0.5를 버린 2가 저장된다. 따라서 1을 뺄 필요가 없다.
		{
			for (j = i;j < n - 1;j++)
			{
				printf(" ");
			}
			for (j = 0;j <= 2 * i;j++)
			{
				printf("*");
			}
			printf("\n");
		}

		for (i = m;i >= 0;i--)	//마찬가지로, 1을 뺼 필요가 없다.
		{
			for (j = i;j < n - 1;j++)
			{
				printf(" ");
			}
			for (j = 0;j <= i * 2;j++)
			{
				printf("*");
			}
			printf("\n");
		
		}
		break;		//case 1의 탈출
	}
}