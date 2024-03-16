/*
** EPITECH PROJECT, 2023
** my_print_alpha.c
** File description:
** my_print-alpha.c (which works, i really
** hate the coding style already) test 01
*/

#include "../../include/my.h"
#include <unistd.h>
#include <stdio.h>
int my_print_alpha(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
    }
    return 0;
}
