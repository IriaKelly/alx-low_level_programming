#include <stdio.h>
/**
 * main - prints a-z and A-Z
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';
	char I = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (I <= 'Z')
	{
		putchar(I);
		I++;
	}
	putchar('\n');
	return (0);
}

