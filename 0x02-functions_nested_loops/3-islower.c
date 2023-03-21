#include "main.h"
/**
 * int_isslower - checks for lowercase
 * C :character being checked
 * Returns 1 if c is lowercase and 0 if uppercase
 */
int_isslower(int c)
{
if (c >= 97 && c <= 122)
{
return(1);
}
return(0);
}
