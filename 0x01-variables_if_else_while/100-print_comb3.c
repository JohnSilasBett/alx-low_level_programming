#include <stdio.h>
/**
 * main - where code excecution begin
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(44);
				putchar (32);
			}
		}
	}
	putchar(10);
	return (0);
}
