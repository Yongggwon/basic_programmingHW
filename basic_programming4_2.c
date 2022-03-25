#include <stdio.h>
#include <limits.h>
#include <float.h>		//declare <limits.h>, <float.h> to use min, max

int main()
{
	printf("char의 최대, 최소 : %d, %d\n",CHAR_MAX, CHAR_MIN);
	printf("int의 최대, 최소 : %d, %d\n", INT_MAX, INT_MIN);
	printf("double의 최대, 최소 : %d, %d\n", DBL_MAX, DBL_MIN);
	printf("float의 최대, 최소 : %d, %d\n", FLT_MAX, FLT_MIN);		//use _MAX, _MIN to print each of char, int, double, float's maximum and minimum value
	return 0;
}