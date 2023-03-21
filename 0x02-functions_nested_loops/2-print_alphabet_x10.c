#include "main.h"
/**Prints 10 times of the alphabet in lowercase
 * Returns: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char c;
int i = 0;
while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}
