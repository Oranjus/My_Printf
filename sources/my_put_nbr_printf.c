/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** my_put_nbr
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my_printf.h"

void my_putchar(char c);

int my_put_nbr_printf(va_list ap)
{
    int nb = va_arg(ap, int);

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
            my_put_nbr(nb / 10);
            my_putchar(nb % 10 + '0');
        }
    }
}
