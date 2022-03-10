#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 * followed by a new line, to the standard error.
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
=======
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
>>>>>>> 0d8c7dac7017b41ed1e30a761879a75861bc7245
	return (1);
}