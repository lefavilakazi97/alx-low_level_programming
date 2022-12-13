#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: Prints the alphabet with _putchar
 *
 * Return: void
 */


void print_alphabet(void)
{
	char f;

	for (f = 'a'; f <= 'z'; f++)
	{
		_putchar(f);
	}
	_putchar('\n');
}
