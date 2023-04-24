#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
int chars (char c)
{
if (tolower(c) >= 'A' || tolower(c) <= 'z')
return 1;
else
return 0 ;
}
int _strlen_recursion(char *s)
{
if (strlen(s) == 0)
return 0;
return chars(s[0]) + _strlen_recursion(s+1);
}
