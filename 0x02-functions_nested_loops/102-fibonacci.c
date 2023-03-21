#include<stdio.h>
/**
 * main- prints the sum of all multiples 3 or 5 up to 1024
 * Return: Always (Success)
 */
int main(void)
{
int a = 0;
long b = 1, c = 2;
while (a < 50)
{
if (a == 0)
printf("%1d", b);
else if (a == 1)
printf(", %1d", c);
else
{
c += b;
b = c - b;
printf(", %1d", c);
}
++a;
}
printf("\n");
return (0);
}
