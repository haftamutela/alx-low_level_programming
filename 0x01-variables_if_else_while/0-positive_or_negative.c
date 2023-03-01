#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
<<<<<<< HEAD
 *
 * Return: Always 0 (Success)
=======
 * 
 * Return: Always 0 (success)
>>>>>>> 9c65daafeb9727f82dfb22d6e256a5864f060db5
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
	/* Your code goes there */
=======

>>>>>>> 9c65daafeb9727f82dfb22d6e256a5864f060db5
	if (n > 0)
	{
		printf("%d is positive\n", n);
<<<<<<< HEAD
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
=======
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

>>>>>>> 9c65daafeb9727f82dfb22d6e256a5864f060db5
	return (0);
}
