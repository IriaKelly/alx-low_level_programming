#include <stdio.h>
/**
 * main - prints 0-9 and a-f
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = '0';
	char i = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

