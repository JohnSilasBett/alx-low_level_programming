#include <stdio.h>
/**
 * main - Prints "That piece of art is useful"
 *
 * Return: Always 0
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;
	for (i=0; i!= '\n'; i++)
		putchar(str[i]);
	return (1);
}
