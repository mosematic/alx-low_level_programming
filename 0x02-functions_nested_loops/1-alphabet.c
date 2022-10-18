#include "main.h"
/**
 * main - Entry point
 * Return: returns 0 if successful
 */

void  print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
