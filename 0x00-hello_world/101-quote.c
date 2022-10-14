#include <stdio.h>
#include <unistd.h>
/**
 *  * main - Prints out the last part of a quote in the standard erro
r.
 *   * Return: 1 if success.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 20
15-10-19\n", 59);
	return (1);
}
