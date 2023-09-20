#include "main.h"
/**
 * _puts  _ prints a string
 *
 * @str: the string
 *
 * Retarn: Nothing
 */
void _puts(char *str)
{
while (*str != '\0')
{
-putchar(*str + 0);
str++;
}
_putchar('\n');
}
