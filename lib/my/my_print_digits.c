/*
** EPITECH PROJECT, 2023
** my_print_digits.c
** File description:
** my_print-digits.c test 01
*/

#include <unistd.h>
int my_print_digits(void)
{
    for (int i = 48; i <= 57; i++) {
        write(1, &i, 1);
    }
}
