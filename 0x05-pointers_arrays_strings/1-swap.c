#include "main.h"
/**
 * swap_int - function swaps the values of two integers
 * @a: integer one
 * @b: integer two
 * Return: 0 Success
 */
void swap_int(int *a, int *b)
{
	int temporal;

	temporal = *a;

	*a = *b;
	*b = temporal;
}