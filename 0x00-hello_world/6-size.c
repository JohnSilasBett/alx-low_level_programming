#include <stdio.h>
/**
 * main - Prints sizes of types
 *
 * Return: Always 0
 */
int main(void)
{

	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}
