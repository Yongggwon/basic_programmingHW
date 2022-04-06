#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
	//오버플로우
	/*printf("오버플로우:\n");
	int s = INT_MAX;						//signed int를 선언
	unsigned int t = UINT_MAX;				//unsigned int를 선언
	printf("int의 최댓값: %d\n", s);		//int의 최댓값
	printf("오버플로우: %d\n",s + 1);			//int 자료형의 최댓값에 1을 더하여 원래 범위를 벗어남, 오버플로우 발생
	printf("unsigned int의 최댓값: %u\n", t);		//부호없는 int의 최댓값
	printf("오버플로우: %u\n\n", t + 1);		//부호없는 int 자료형의 최댓값에 1을 더하여 원래 범위를 벗어남, 오버플로우 발생

	//자료형의 최댓값에 1을 더하니 오버플로우가 발생하여 다시 최솟값을 출력한다.*/

	//언더플로우
	printf("언더플로우:\n");
	int m = INT_MIN;						
					
	printf("int의 최솟값: %d\n", m);		//int의 최솟값
	printf("언더플로우: %d\n", m - 1);			//int 자료형의 최솟값에 1을 빼서 원래 범위를 벗어남, 언더플로우 발생
	

	//자료형의 최댓값에 1을 빼니 오버플로우가 발생하여 다시 최댓값을 출력한다.
	
}