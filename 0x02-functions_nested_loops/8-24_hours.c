#include "main.h"
/**
 *
 *jack_bauer- prints every minute of the day
 *
 */

void jack_bauer(void);
{
	int i, j;

	for (i > 0; i < 24, ++i)
	{
		for (j = 0; j < 60; ++j)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}

																	}
