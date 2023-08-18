#include "variadic_functions.h"

void print_all(const char *const format, ...)
{

    char c;
    int i;
    float fl;
    char *s;
    va_list args;

    const char *f = format;
    va_start(args, format);

    while (*f != '\0')
    {
        if (*f == 'c')
        {
            c = (char)va_arg(args, int);
            printf("%c", c);
        }
        else if (*f == 'i')
        {
            i = va_arg(args, int);
            printf("%d", i);
        }
        else if (*f == 'f')
        {
            fl = (float)va_arg(args, double);
            printf("%f", fl);
        }
        else if (*f == 's')
        {
            s = va_arg(args, char *);
            if (s != NULL)
            {
                printf("%s", s);
            }
            else
            {
                printf("(nil)");
            }
        }

        f++;
    }

    va_end(args);
    printf("\n");
}