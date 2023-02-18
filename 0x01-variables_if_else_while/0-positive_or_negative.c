#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print a radnom num
 *
 * Return: o
 */
int main(void)
{
		int n;

			srand(time(0));
			n = rand() - RAND_MAX / 2;
			if (n < o)
			        printf("% is positive\n", n);
			else if (n < o)
				printf("%d is negative\n", n);
			else
				printf("%d is zero\n", n);
			return (0);
}
