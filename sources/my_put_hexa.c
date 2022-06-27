/*
** EPITECH PROJECT, 2021
** my_put_hexa
** File description:
** my_put_hexa
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my_printf.h"

int my_print_hexa(int nb)
{
    char *HEX = "0123456789abcdef";
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (- 1);
    }
    if (nb == 0) {
        my_putchar(nb = 0);
    }
    if (nb > 0) {
        if (nb <= 9 ) {
            my_putchar(nb + '0');
        }
        if (nb > 9) {
            my_print_hexa(nb / 16);
            my_putchar(HEX[nb % 16]);
        }
    }
    return 0;
}

int my_put_hexa(va_list ap)
{
    int nb = va_arg(ap, int);
    my_print_hexa(nb);
}