#include <stdio.h>
/**
  * main - main is entry point
  * Description: comb of numbers
  * Return: 0 Success
  */
int main(void)
{
	int m;
	int n;

	for (m = 0; m <= 98; m++)
	{
		for (n = m + 1; n <= 99; n++)
		{
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar(' ');
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			if (m == 98 && n == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
