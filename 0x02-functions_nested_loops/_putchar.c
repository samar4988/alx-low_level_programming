#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the charcter c to stdout @c: the chracter to print
 *
 * Return: on success 1.
 * on error, -1 is returned, end errno is set appropriataly.
*/
int _putchar (char c)
{
	return (write(1, &c, 1));
}
