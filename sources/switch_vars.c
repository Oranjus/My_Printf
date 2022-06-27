/*
** EPITECH PROJECT, 2021
** switch_vars
** File description:
** function switch_vars for my_printf
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my_printf.h"
#include "struct.h"

int switch_vars(char *test, int *i, va_list ap)
{
    if (test == NULL) {
        return (84);
    }

    int n = 0;

    *i += 1;
    if (test[*i] == '%') {
        my_putchar('%');
        return (0);
    }
    while (tableau_flag[n].letter != '\0') {
        if (test[*i] == tableau_flag[n].letter) {
            tableau_flag[n].ptr_function(ap);
        }
        n += 1;
    }
    return (0);
}
