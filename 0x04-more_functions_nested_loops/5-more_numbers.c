#include "main.h"

/**
  * more_numbers - Print 10 times the numbers since 0 up to 14
  *
  * Return: 10 times of the numbers since 0 up to 14
  */
void more_numbers(void)
{
for (int i = 0; i <= 14; i++)
{
for (int j = 0; j < 10; j++)
_putchar("%d ", i);
}
_putchar('\n');
}
