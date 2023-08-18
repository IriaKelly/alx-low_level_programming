#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints numbers from 1 to 100, following the FizzBuzz rules
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}

		if (num != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
