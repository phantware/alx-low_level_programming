#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: string
 * Return: nothing
 */
void puts_half(char *str)
{
	int index, length;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if ((length % 2) != 0)
	{
		index = (length + 1) / 2;
	}
	else
	{
		index = (length / 2);
	}

	while (index < length)
	{
		_putchar(str[index]);
		index++;
	}

	_putchar('\n');
}