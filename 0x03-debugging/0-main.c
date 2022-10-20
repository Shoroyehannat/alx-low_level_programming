#include "main.h"

/**
 * main - assigns a random number to int i everytime
 * it executes, and prints it
 * followed by a new line
 */
void positive_or_negative(int i);
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	printf("%d\n");
}
