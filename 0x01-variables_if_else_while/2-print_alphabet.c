#include <stdio.h>
/**
 * main - function to print alphabet in lowercase
 * Return: 0 if successful
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
