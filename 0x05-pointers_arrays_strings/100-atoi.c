#include "main.h"
/**
 * _atoi - delete characters and let only numbers
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int i, value, sign;

	value = 0;
	sign = 1;

	for (i = 0; s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'); i++)
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
	}

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			value = value * 10 + sign * (s[i] - '0');
		}

		if (value != 0 && !(s[i] >= '0' && s[i] <= '9'))
		{
			return (value);
		}
	}
	return (value);
}