#include <stdio.h>
/**
 * main-Print numbers to the base 16
 * Return:0 (Success)
 */
int main(void)
{
int i;
char c;
for (i = 0; i < 10; i++)
{
c = (i + '0');
putchar(c);
}
for (i = 10; i < 16; i++)
{
c = (i - 10 + 'a');
putchar(c);
}
putchar('\n');
return (0);
}
