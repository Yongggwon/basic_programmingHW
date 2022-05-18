#include <stdio.h>
#define SIZEa 2		//첫 행렬의 행
#define SIZEb 3		//첫 행렬의 열
#define SIZEc 3		//두 번째 행렬의 행
#define SIZEd 3		//두 번째 행렬의 열

void matrix_product(int *pa, int *pb)		//입력받은 행렬을 포인터 배열로 입력받음
{
	int i, j,k, result = 0;		//행렬곱을 
	int* elt = &result;			//결과값을 포인터 변수로 지정

	if (SIZEb == SIZEc)			//행렬곱이 실행되기 위한 조건	
	{
		for (i = 0; i < SIZEa; i++)		//행에 대한 연산
		{

			for (j = 0; j < SIZEd; j++)		//열에 대한 연산
			{
				*(elt+i*j) = 0;			//포인터 변수를 초기화
				
				for (k = 0; k < SIZEb; k++)			//첫 행렬의 행과 두번째 행렬의 열을 곱한 값을 각각 더하기 위함
				{
					result += *(pa + SIZEa * i + k) * *(pb + k * SIZEd + j);
				}
				printf("%d ", result);		//결과값 출력
				
			}
			printf("\n");		//1행의 출력이 끝나면 2행 출력
		}
		printf("\n");
	}
	else
		printf("계산불가");		//조건을 만족하지 않을 시 계산 불가
}

int main(void)
{
	int A[SIZEa * SIZEb] = { 3, 1, 3,    4, 5, 1 };
	int B[SIZEc * SIZEd] = { 2,4,6,   1,2,3,   6,5,4 };

	matrix_product(A, B);
	return 0;
}