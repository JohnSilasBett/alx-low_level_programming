#include <stdio.h>
/**
 * main - The excecution begines here
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
			putchar(i);
	}
	putchar(10);
	return (0);
}
