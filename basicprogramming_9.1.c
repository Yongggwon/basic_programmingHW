#include <stdio.h>
#define W 2				//첫 번째 행렬의 행
#define X 4				//첫 번째 행렬의 열
#define Y 4				//두 번째 행렬의 행
#define Z 3				//두 번째 행렬의 열

void matrixAddition(int a[W][X], int b[Y][Z])
{
	if (W == Y && X == Z)		//두 행렬의 행과 열이 각각 일치해야만 계산 실행
	{
		int i, j;
		int result[X][Y];		//행렬의 사이즈가 일치한다면 덧셈결과의 사이즈 또한 일치
		printf("행렬의 합은 {");
		for (i = 0; i < X; i++)		//행에 대한 반복
		{
			printf("(");
			for (j = 0; j < Y; j++)		//열에 대한 반복
			{
				result[i][j] = a[i][j] + b[i][j];	//첫 번째 행렬과 두 번째 행렬의 동일한 위치의 성분을 더한다.
				printf(" %d ", result[i][j]);		//결과 출력
			}
			printf(")");
		}
		printf("}\n");
	}
	else	
		printf("행렬의 합을 계산할 수 없습니다.\n");			//연산대상 행렬이 조건을 만족하지 않는 경우 실행 x
}

void matrixSubtraction(int a[W][X], int b[Y][Z])		//덧셈의 역연산은 뺄셈이므로 +를 -로 바꾸어주면 행렬의 차를 계산할수 있다.
{
	if (W == Y && X == Z)
	{
		int i, j;
		int result[X][Y];
		printf("행렬의 차는{");
		for (i = 0; i < X; i++)
		{
			printf("(");
			for (j = 0; j < Y; j++)
			{
				result[i][j] = a[i][j] - b[i][j];
				printf(" %d ", result[i][j]);
			}
			printf(")");
		}
		printf("}\n");
	}
	else
		printf("행렬의 차를 계산할 수 없습니다.\n");
}

void matrixMultiplication(int a[W][X], int b[Y][Z])
{
	if (X == Y)			//첫번째 행렬의 행과 두 번째 행렬의 열이 일치하여야만 연산 실행
	{
		int result[W][Z];
		int i, j, k;
		printf("행렬의 곱은{");
		for (i = 0; i < W; i++)			//첫 번째 행렬의 행 만큼 반복
		{
			printf("(");
			for (j = 0; j < Z; j++)			//두 번째 행렬의 열 만큼 반복
			{ 
				result[i][j] = 0; 
				for (k = 0; k < X; k++)			//첫 번째 행렬의 열과 두 번째 행렬의 행의 수 만큼 연산 실행
					result[i][j] += a[i][k] * b[k][j];		/*ex) 1행 1열의 값을 구하려면 a행렬의 1행(1행1열, 1행2열, ...), 
															b 행렬의 1열(1행1열, 2행 1열, ...)의 성분을 각각 곱하여 더해야 한다. */
					printf("%d ", result[i][j]);
			}
			printf(")");
		}
		printf("}\n");
	}
	else
		printf("행렬의 곱을 계산할 수 없습니다.\n");
}

int main(void)
{
	int mat_A[W][X] = { {3,5,7,5},{1,2,6,6} };
	int mat_B[Y][Z] = { {1,0,4},{2,4,5},{8,3,1},{0,4,3} };

	
	matrixAddition(mat_A, mat_B);
	matrixSubtraction(mat_A, mat_B);
	matrixMultiplication(mat_A, mat_B);
}
