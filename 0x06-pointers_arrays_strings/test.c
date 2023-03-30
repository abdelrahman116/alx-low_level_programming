#include <stdio.h>
#include <string.h>
int main ()
{
char s1[] = "HELLO ";
char s2[] = "HELLO ";
int len = strcmp(s1,s2);
int len2 = strcmp(s2,s1);
printf(" The Length =  %d\n", len );
printf("strcat( str1, str2):   %s\n", s1 );
printf("strcat( str1, str2):   %s\n", s2 );
printf(" The Length =  %d\n", len2 );
}
