#include "main.h"

/**
  * print_alphabet_x10 - Make alphabet x10 times
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i <= 9)
	{
		for (ch = 'a'; c <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');

		i++;
	}
}
