#include<stdio.h>
/**
 * main-Print alphabet in lowercase except q and e
 * Return:Always 0 (Success)
 */
int main(void)
{
char m = 'a';
while (m <= 'z')
{
if
(m != 'e' && m != 'q')
{
putchar (m);
}
m++;
}
putchar('\n');
return (0);
}
