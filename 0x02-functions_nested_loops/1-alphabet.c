#include "main.h"
/**
 * main - Entry point
 * Description: print lowercase
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
