#include <stdlib.h>
#include "main.h"

/**
 * _strdup - create an array of chars
 * @str: char
 *
 * Return: char
 */

char *_strdup(char *str)
{
int length, i;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}

	arr = malloc(length * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		arr[i] = str[i];
	}
