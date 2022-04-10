#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function to check positive or negative int
 * Return: positive or negative or zero int
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
