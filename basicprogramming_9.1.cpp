#include <stdio.h>
#define X 3
#define Y 3

void matrixSum(int a[][X], int b[][X])
{
	int i, j;
	int sum[Y][X];
	for (i = 0;i < X;i++)
	{
		for (j = 0;j < X;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
			printf(" %2d ",sum[i][j]);
		}
	}
}

int main(void)
{
	int mat_A[Y][X] = { {3,5,7},{1,2,6},{9,4,5} };
	int mat_B[Y][X] = { {1,0,4},{2,4,5},{8,3,1} };
	matrixSum(mat_A, mat_B);
}
//parameter 지정
