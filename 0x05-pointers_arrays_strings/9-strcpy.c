#include  "main.h"
/**
 * _strcpy -  copies the string pointed to by src,
 *@dest: destination
 *@src: source
 *Return: destination
 */
char *_strcpy(char *dest, char *src)
{
char *start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
