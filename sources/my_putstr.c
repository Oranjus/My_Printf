/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** my_putstr
*/

#include "my_printf.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
