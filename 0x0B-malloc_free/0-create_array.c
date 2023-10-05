#include "main.h"
/**
 *create_array - array for prints a string
 *@size: number elements array
 *@c: char
 *Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if (size == 0)
		return (NULL);
	buffer = malloc(size * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
