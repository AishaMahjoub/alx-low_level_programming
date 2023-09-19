#include "main.h"
/**
 * _strlen _ returns the length.
 * @s: the string parametar input.
 * Return: length of string.
 */
int _strlen(char *s)
{
int counter;
for (counter = 0; *s != '\0'; s++)
++counter;
return (counter);
}
