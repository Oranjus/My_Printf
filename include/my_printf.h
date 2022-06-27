/*
** EPITECH PROJECT, 2022
** B-PSU-100-BDX-1-1-myprintf-lucas.brahimi
** File description:
** printf
*/
#include <stdarg.h>

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_

void my_putchar(char c);
int switch_vars(char *test, int *i, va_list ap);
int my_putstr_printf(va_list ap);
int my_putchar_printf(va_list ap);
int my_put_nbr_printf(va_list ap);
int my_putstr(char const *str);
void my_put_nbr(int nb);
int my_strlen(char const *str);
int sum_strings_length(int n, ...);
int sum_numbers(int n, ...);
int my_printf(char *test2, ...);
int my_put_hexa_maj(va_list ap);
int my_put_hexa(va_list ap);
int my_put_octo(va_list ap);
int call_flags(char *test, int *i, va_list ap);

#endif /* !MY_PRINTF_H_ */
