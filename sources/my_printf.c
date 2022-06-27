/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** function my_printf
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my_printf.h"

int my_printf(char *test2, ...)
{
    if (test2 == NULL) {
        return (84);
    }

    va_list ap;
    va_start(ap, test2);
    int i = 0;

    while (test2[i] != '\0') {
        if (test2[i] != '%')
            my_putchar(test2[i]);
        else {
            switch_vars(test2, &i, ap);
        }
        i++;
    }
}
