#include <stdio.h>

/**
 * main- prints the largest prime
 * factor of a number
 *
 * Return: return 0
 *
*/

int main(void)
{
	long number = 612852475143;
	int ine;

	while (ine++ < number / 2)
	{
	if (number % ine == 0)
	{
		number /= 2;
		continue;
	}

	for (ine = 3; ine < number / 2; ine += 2)
	{
		if (number % ine == 0)
			number /= ine;
	}
	}
	printf("%ld\n", number);
	return (0);
}
