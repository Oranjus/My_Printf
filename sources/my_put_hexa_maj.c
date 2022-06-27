/*
** EPITECH PROJECT, 2021
** my_put_hexa.c
** File description:
** my_put_hexaMAJ
*/
#include <stdarg.h>
#include <stdlib.h>
#include "my_printf.h"

int my_print_hexa_maj(int nb)
{
    char *HEX = "0123456789ABCDEF";

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
            my_print_hexa_maj(nb / 16);
            my_putchar(HEX[nb % 16]);
        }
    }
    return 0;
}

int my_put_hexa_maj(va_list ap)
{
    int nb = va_arg(ap, int);
    my_print_hexa_maj(nb);
}
