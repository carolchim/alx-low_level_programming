#include <stdio.h>
/**
  * main - main is entry point
  * Description: 'to print lower and uppercase alphabets'
  * Return: 0 Success
  */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
