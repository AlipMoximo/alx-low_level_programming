#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - Prints all natural numbers till 98
 * @n: Number to start printing at
 * Return Always 0
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
}
