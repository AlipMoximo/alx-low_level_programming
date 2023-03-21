#include<unistd.h>
/**
 * main-Entry point, no using standard library, print _putchar
 * Return:Always 0 (Success)
 */
int main(void)
{
char m[] = "_putchar\n";
write(1, m, sizeof(m));
return (0);
}
