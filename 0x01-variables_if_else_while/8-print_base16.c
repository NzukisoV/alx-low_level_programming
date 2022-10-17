#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int d;
	char low;

	for (d = '0';  <= '9'; d++)
		putchar (d);
	for (d = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
