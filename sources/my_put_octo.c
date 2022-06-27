/*
** EPITECH PROJECT, 2021
** my_put_hexa
** File description:
** my_put_hexa
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my_printf.h"

int my_print_octo(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (- 1);
    }
    if (nb == 0) {
        my_putchar(nb = 0);
    }
    if (nb > 0) {
        if (nb <= 7 ) {
            my_putchar(nb + '0');
        }
        if (nb > 7) {
            my_print_octo(nb / 8);
            my_putchar(nb % 8 + '0');
        }
    }
}

int my_put_octo(va_list ap)
{
    int nb = va_arg(ap, int);
    my_print_octo(nb);
}
