#include <stdio.h>

/**
 * main - Entry point
 *
 * Descriotion: print all alphabet letters
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putcher('\n');

	return (0);
}
