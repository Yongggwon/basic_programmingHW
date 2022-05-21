#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *give_lotto_num(void)	//천 개의 임의의 복권 번호를 생성하는 함수
{
	srand((unsigned int)time(NULL));		//rand()를 사용하기 위해 time함수를 이용한 seed생성
	int i, j,k;		//반복문 사용을 위한 변수 선언
	static int lotto[1000][7];		//복권 생성을 위한 1000개의 복권을 이차원 배열로 생성
	for (k = 0; k < 1000; k++)
	{
		for (j = 0; j < 7; j++)
		{
			int num = rand() % 70 + 1;		//1~70사이의 랜덤 정수 생성
			lotto[k][j] = num;				//k번째 복권의 j번째 수로 지정
			for (i = 0; i < j; i++)
			{
				if (lotto[k][j] == lotto[k][i])		//동일한 복권에 같은 수가 존재한다면 뒤로돌아감
				{
					j--;
					break;
				}
			}	//중복하는 숫자를 제거하는 반복문
		}
	} 
	return (int*) lotto;		//이차원 배열을 반환
}
		
int *get_1st_place(int a[][7])		//천 개의 복권 중 1등이 될 무작위 복권을 생성하는 함수
{
	int num = rand() % 1000 ;		//랜덤 수 선택
	static int lotto[7];		//일차원 배열을 정의
	int* plot = lotto;		//포인터 형식 변수로 지정
	for (int i = 0; i < 7; i++)
		*(plot+i) = a[num][i];			//일등 복권의 7자리 수를 일차원 배열로 지정
	return lotto;		//반환
}

void print(int lotto[])		//1등복권 결과를 출력하는 함수
{
	int* nums = lotto;		//
	printf("일등번호는 ");
	for (int i = 0; i < 7; i++)
		printf("%d ", *(nums+i));		//1등복권 숫자 7자리 출력
	printf("입니다.\n");
}

int *get_correct_num(int a[][7], int b[])		//각 복권의 일치하는 숫자의 개수를 출력하는 함수
{
	int i, j,k;
	static int num_correct[1000];		//결과값을 출력하기 위한 일차원 배열 생성
	for (i = 0; i<1000; i++)
	{
		int num = 0;
		for (j = 0; j < 7; j++)		//1000개의 배열의 각각의 7자리 수를 순서대로 검사
		{
			for (k = 0; k < 7; k++)		//1등복권과 비교
			{
				if (a[i][j] == b[k])		//1등복권의 수와 일치하는수가 있다면 1 추가
					num++;
			}
		}
		num_correct[i] = num;		//7자리 숫자에 대한 검사가 끝나면 배열의 원소로 일치하는 갯수 지정
	}
	return num_correct;		//1000자리 일차원 배열을 반환

}
int main(void)		//메인함수
{
	print(get_1st_place(give_lotto_num()));		//1000개 복권을 생성 후 1등복권을 출력함
	int* result = get_correct_num(give_lotto_num(), get_1st_place(give_lotto_num()));	//1000개의 결과를 반환하는 변수를 저장할 포인터변수
	
	int num;
	printf("복권 당첨 개수 결과를 출력합니다.\n");
	for (num = 0; num < 1000; num++)
		printf("%d번째: %d개  ", num, *(result + num));
}