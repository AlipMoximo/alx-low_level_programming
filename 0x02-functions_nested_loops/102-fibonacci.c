#include<stdio.h>
/**
 * main- prints the sum of all multiples 3 or 5 up to 1024
 * Return: Always (Success)
 */
int main(void)
{
long int a, b, c, d;
b = 1;
c = 2;
d = 3;
for (a = 0; a < 50; a++)
{
if (a != 49)
printf("%1d, ", b);
else
	printf("%1d\n", b);
d = c + d;
c = b + c;
b = d - c;
}
return (0);
}
