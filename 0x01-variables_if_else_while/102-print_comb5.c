#include <stdio.h>

/**
 * main - Entry point
 * Description: write a program that prints all
 * possible difrrerent combinations of two digits
 * Return: 0
*/

int main(void)
{
	int fristDigit = 0, seconDigit;

	while (fristDigit <= 99)
	{
		seconDigit = firstDigit;
		while (seconDigit <= 99)
		{
			if (seconDigit != fristDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((seconDigit / 10) + 48);
				putchar((seconDigit % 10) + 48);

				if (firstDigit != 98 || secoDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			seconDigit++;
		}
		firstDigit++;
	}
	putchar('\n');

	return (0);
}

