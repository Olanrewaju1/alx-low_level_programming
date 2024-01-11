#include <stdio.h>

int main(void)
{
	int num;
	int *p = &num;
	int **pp = &p;

	num = 54;
	**pp = 67;

	printf("The value of num is: %d\n", **pp);
}
