#include <stdio.h>
#include "main.h"

/**
 * print_square - print a square
 *
 * @size: paramoter
 *
 * Return: Always 0 (success)
*/

void print_square(int size)
{
	int ine1, ine2;

	if (size > 0)
	{

		for (ine1 = 0; ine1 < size; ine1++)
		{
			for (ine2 = 0; ine2 < (size - 1); ine2++)
			{
				putchar('*');
			}
			putchar('*');
			putchar('\n');
		}
	}
	else
	}
		putchar('\n');
	}
}
