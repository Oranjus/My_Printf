/*
** EPITECH PROJECT, 2021
** my_printf headers.
** File description:
** headers
*/

#include "my_printf.h"
#include <stddef.h>

#ifndef MY_LIB_H
    #define MY_LIB_H

typedef struct flag {
    char letter;
    int (*ptr_function)(va_list ap);
} flag_t;

flag_t tableau_flag[] = {
    {'c', &my_putchar_printf},
    {'d', &my_put_nbr_printf},
    {'i', &my_put_nbr_printf},
    {'s', &my_putstr_printf},
    {'S', &my_putstr_printf},
    {'x', &my_put_hexa},
    {'X', &my_put_hexa_maj},
    {'o', &my_put_octo},
    {'\0', NULL},
};

#endif
