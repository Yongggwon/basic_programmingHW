#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Second Operation
int main()
{
	int i;
	srand(time(NULL));		//시간을 초단위로 출력, seed값이 매초마다 바뀜
	for (i = 0; i < 10; i++)		//repeat 10 time; print rand()
		printf("%d\n", rand());
}