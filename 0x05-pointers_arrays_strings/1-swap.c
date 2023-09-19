#include "main.h"
/**
 * swap_int -swaps the values of two integers
 * @a: input parametar 1
 * @b: input parametar 2
 * Retarn: Nothing
 */
void swap_int(int *a, int *b)
{
int tamp;
tamp = *a;
*a = *b;
*b = tamp;
}
