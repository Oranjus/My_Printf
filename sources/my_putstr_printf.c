/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** my_putstr
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my_printf.h"

int my_putstr_printf(va_list ap)
{
    char *str = va_arg(ap, char *);

    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
