#include "main.h"
/**
 * _abs - Computes the absolute value of an interger
 * @c: number to be computed
 *
 * Return: Always Absolute value of number or zero
 */
int _abs(int c)
{
if (c < 0)
{
int val;
val = c * -1;
return (val);
}
return (c);
}
