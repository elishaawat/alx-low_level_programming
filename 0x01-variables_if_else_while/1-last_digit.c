#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the last digit
 *
 * Return :Always 0 (sucess)
 */
int main(void)
{
	int n;
	int o;

	strand(time(0));
	n = rand() - RAND_MAX /2;

	if (n % 10 > 5)
	{
		printf("last digit of %i is %i and is greater than 5\n", n, n % 10 );
	}
	else if (n % 10 == 0)
	{
		printf("last digit of %i is %i and 0\n", n, n % 10 );
	}
	else 
	{
		printf("last digit of %i is %i less than 6 and not 0\n" n, n % 10 );
	}

	return (0);
}
