#include "main.h"
/**
 *_strlen - a function that returns the length of a string.
 *@s: an argument to be used in the function
 *Return: length of the string
 */
int _strlen(char *s)
{
int len;
while (*s != '\0')
{
len += 1;
*s = *s + 1;
}
return (len);
}
