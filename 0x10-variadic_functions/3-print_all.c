#include "variadic_functions.h"
void print_all(const char * const format, ...)
{
       int i;

        va_list args;

        int n = strlen(format);
        va_start(args, n);
for (i = 0; i < n; i++)
{
    if (format[i] == 'i')
    {
    int x = va_arg(args, int);
    printf("%d", x);
    }

 if(format[i] == 's')
{
        char *x = va_arg(args, char *);

    
        printf("%s,", x);
}
if (format[i] == 'c')
    {
    char x = va_arg(args, char);
    printf("%c,", x);
    }
}
va_end(args);
printf("\n");
}
