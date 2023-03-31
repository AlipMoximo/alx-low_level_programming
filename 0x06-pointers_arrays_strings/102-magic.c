#include <stdio.h>
/**
 * main-entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int a[] = { 4, 8, 98, 0, 12 };
int *p = a;

printf("a[0] = %d\n", *p);
printf("a[1] = %d\n", *(p + 1));


printf("a[3] = %d\n", *(p + 3));
printf("a[4] = %d\n", *(p + 4));

return (0);
}
