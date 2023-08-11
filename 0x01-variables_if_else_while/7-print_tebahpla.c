#include <stdio.h>
/**
  * main - main is entry point
  * Description:alphabeths in reverse order
  * Return: 0 Success
  */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
