#include <stdio.h>
/**
 * main - prints the size of data types
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of a char: %lu byte(s)\n", sizeof(b));
	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of a char: %lu byte(s)\n", sizeof(d));
	printf("Size of a char: %lu byte(s)\n", sizeof(e));
	return (0);
}
