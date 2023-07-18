#include "main.h"

/**
 * times_table - prints 9 times table starting with 0
 *
 * Example Table
 *0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
 *0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
 *0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
 */
void times_table(void)
{
	int i, j, s;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			s = i * j;

			if ((s / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(s + 48);

				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((s / 10) + 48);
				_putchar((s % 10) + 48);
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

