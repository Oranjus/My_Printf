/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** function that returns strings.
*/

#include "my_printf.h"

int  my_strlen(char const *str )
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}