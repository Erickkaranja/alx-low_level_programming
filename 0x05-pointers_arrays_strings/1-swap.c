#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first swap integer
 * @b: second swap integer
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
