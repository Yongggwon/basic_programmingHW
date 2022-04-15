#include <stdio.h>

int main()
{
	int dan, num;		//declare variables such that are need to compose 구구단
	
	for (dan = 2;dan < 10;dan++)		//first 'for' loop, 1~9까지 곱한 뒤 단을 1 증가
	{									//두번째 for문 시작시 num=1로 다시 초기화됨
		for (num = 1;num < 10;num++)	//second 'for' loop, 1~9까지 곱하기
			printf("%d x %d = %d\t", dan, num, dan * num);	//print 구구단, \t를 통해 수직방향 간격
		
		printf("\n");	//한 단이 끝날 때 마다 줄바꿈
	}
}
