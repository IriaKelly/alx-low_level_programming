#include <stdio.h>
/**
 * main - prints 0-9 and A-F
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = '0';
	char I = 'A';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (I <= 'F')
	{
		putchar(I);
		I++;
	}
	putchar('\n');
	return (0);
}

