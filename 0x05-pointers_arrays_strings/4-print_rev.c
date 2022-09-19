#include "main.h"
#include <string.h>
/**
 *print_rev -  a function that prints a string, in reverse, followed by a new line.
 *@s: string to be reversed
 */
void print_rev(char *s)
{
int len = strlen(s);
while (len--)
{
_putchar(*(s + len));
}
_putchar(10);
}
