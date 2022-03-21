#include "main.h"
/**
 * _strlen - function returns the length of a string
 * @s: string
 * Return: integer legth of a string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	return (length);
}