#include <stdio.h>
/**
  * main - main is entry point
  * Description: to print the alphabets in lowercase
  * Return: 0 Success
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
