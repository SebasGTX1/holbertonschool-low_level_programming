#include <stdio.h>
/**
 * main - prints to the stderr
 *
 * Return: Always 1 (Success)
 */

int main(void)

{
char *x;

x = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

fwrite(x, 59, 1, stderr);



return (1);

}
