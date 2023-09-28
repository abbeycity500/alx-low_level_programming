#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s:pointer to a string
 *
 * Retutn: Always 0
 */
void _puts_recursion(char *s)
{
	char *s1 = s;

	if (*s1 != '\0')
	{
		_putchar(*s1);
		s1++;
			_puts_recursion(s1);
	}
	else
		_putchar('\n');
}
