#include "main.h"

/**
 * jack_bauer- prints every minute of the day
*/

void jack_bauer(void)
{
	int h = 0;
	int m;

	while (h <= 23)
	{
		m = 0;
		while (m <= 59)
		{
			if (h < 10 && m < 10)
				printf("0%d:0%d\n", h, m);
			else if (m < 10)
				printf("%d:0%d\n", h, m);
			else if (h < 10)
				printf("0%d:%d\n", h, m);
			else
				printf("%d:%d\n", h, m);
			m++;
		}
		h++;
	}
}
