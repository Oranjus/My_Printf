/*
** EPITECH PROJECT, 2022
** B-PSU-100-BDX-1-1-myprintf-lucas.brahimi
** File description:
** test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_printf.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, string, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, chiffre, .init = redirect_all_std)
{
    int a = 12;
    my_printf("%i", a);
    cr_assert_stdout_eq_str("12");
}

Test(my_printf, string_with_int_and_char, .init = redirect_all_std)
{
    int a = 12;
    char *str = "salut";
    int d = 1;

    my_printf("%i salut %s %d", a, str, d);
    cr_assert_stdout_eq_str("12 salut salut 1");
}

Test(my_printf, char, .init = redirect_all_std)
{
    char c = 'c';

    my_printf("%c", c);
    cr_assert_stdout_eq_str("c");
}

Test(my_put_hexa, char, .init = redirect_all_std)
{
    int a = 102;

    my_printf("%x", a);
    cr_assert_stdout_eq_str("66");
}

Test(my_put_hexa_maj, char, .init = redirect_all_std)
{
    int a = 47;

    my_printf("%X", a);
    cr_assert_stdout_eq_str("2F");
}

Test(my_put_octo, char, .init = redirect_all_std)
{
    int a = 345;

    my_printf("%o", a);
    cr_assert_stdout_eq_str("531");
}

Test(my_print, string_with_int_and_char, .init = redirect_all_std)
{
    int a = 12;
    char *str = "salut";
    int d = 1;

    my_printf("%i salut%% %s %d", a, str, d);
    cr_assert_stdout_eq_str("12 salut% salut 1");
}