#include <stdio.h>
/**
  * main - main is entry point
  * Description: print combo of numbers
  * Return: 0 Success
  */
int main(void)
{
	int n;
	int m;

	for (m = '0'; m < '9'; m++)
	{
		for (n = m + 1; n <= '9'; n++)
		{
			if (n != m)
			{
				putchar(m);
				putchar(n);
				if (m == '8' && n == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
