#include <stdio.h>

int main(void)
{
	int num = 1;
	int dan = 2;

	while (dan < 10) 
	{
		while (num < 10) {
			printf("%dx%d=%d  ", dan, num, dan * num);
			num++;
		}
		num = 1;
		printf("\n");
		dan++;
	}
	return 0;
}