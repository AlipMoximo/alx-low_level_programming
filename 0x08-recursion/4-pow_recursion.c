#include "main.h"
/**
 * _pow_recursion-Entry
 * Description: Function that returns the value of i raised to the power j
 * @i: int
 * @j:int
 * Return: Always (Success)
 */
int _pow_recursion(int i, int j)
{
if (j < 0)
{
return (-1);
}
else if (j == 0)
{
return (1);
}
else
{
return (i * _pow_recursion(i, j - 1));
}
}
