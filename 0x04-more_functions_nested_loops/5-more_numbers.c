#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * Return: no return
 */

void more_numbers(void)
{
	int num, a;

	for (a = 0; a <= 9; a++)
	{
		for (num = 0; n <= 14; n++)
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
