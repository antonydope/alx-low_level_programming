#include "main.h"
#include <string.h>
/**
 *print_rev - function that prints a string reversely.
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
