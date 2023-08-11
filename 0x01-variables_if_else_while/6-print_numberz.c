#include <stdio.h>
/**
  * main - main is entry point
  * Description: numbers using putchar
  * Return: 0 Success
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
