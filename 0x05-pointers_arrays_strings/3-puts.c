#include "main.h"

/**
 * _puts  _ prints a string followed by a new line to stdout.
 *
 * @str: string prametar to prints
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
