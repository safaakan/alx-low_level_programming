#include <stdio.h>
#define __FILE_NAME__ "2-main.c"
/**
 * main - prints the name of the file it was compiled from
 *
 * Return: Everything worked ok
 */

int main(void)
{
	printf("%s\n", __FILE_NAME__);
	return (0);
}
