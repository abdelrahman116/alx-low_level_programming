void print_all(const char * const format, ...)
{
        unsigned int i;

        va_list args;

        int n = strlen(format);
        va_start(args, n);
for (i = 0; i < n; i++)
{
    if (format == "i")
    {
    int x = va_arg(args, int);
    printf("%d,", x);
    }
    while(format == "f")
    {
    double x = va_arg(args, double);
    printf("%f,", x);
    }
    while(format == "s")
{
        char *x = va_arg(args, char*);

        if (x == NULL)
        printf(NULL);
        else
        printf("%s,", x);
}
if (format == "c")
    {
    char x = va_arg(args, char);
    printf("%c,", x);
    }
}
va_end(args);
printf("\n");
}
