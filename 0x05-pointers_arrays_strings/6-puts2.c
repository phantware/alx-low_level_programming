#include "main.h"
/**
 * puts2 - function prints every other character of a string
 * @str: string
 * Return: nothing
 */
void puts2(char *str)
{
	int a, b;

	a = 0;
	b = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	while (b < a)
	{
		_putchar(str[b]);
		b += 2;
	}
	_putchar('\n');
}