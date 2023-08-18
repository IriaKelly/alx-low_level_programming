#include "main.h"
#include <unistd.h>

/**
 * more_numbers - prints 10 sets of numbers from 0 to 14 followed by a new line
 */
void more_numbers(void)
{
	int num, count;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
