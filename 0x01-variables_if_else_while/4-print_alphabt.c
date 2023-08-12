#include <stdio.h>
/**
 * main - prints a-z except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}

