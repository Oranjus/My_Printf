/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** lib
*/

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_printf.h"

int my_putchar_printf(va_list ap)
{
    char c = va_arg(ap, char *);
    write (1, &c, 1);
}
