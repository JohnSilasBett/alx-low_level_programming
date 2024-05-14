#include <stdio.h>
/**
 * main - Prints sizes of types
 *
 * Return: Always 0
 */
int main(void)
{
	printf("The size of char: %zu byte(s)\n", sizeof(char));
	printf("The size of int: %zu byte(s)\n", sizeof(int));
	printf("The size of long int: %zu byte(s)\n", sizeof(long int));
	printf("The size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("The size of float: %zu byte(s)\n", sizeof(float));
}
