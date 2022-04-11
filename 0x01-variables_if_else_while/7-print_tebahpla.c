#include <stdio.h>
/**
 * main - function to print alphabets in reverse order
 * Return:  0 if successful
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
