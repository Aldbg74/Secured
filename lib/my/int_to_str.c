/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** int_to_str.c
*/

#include <stdlib.h>
#include "../../include/my.h"
char *entier_convert(int nb)
{
    char *str = malloc(sizeof(char *));
    int y;
    int i = 0;

    if (nb == 0) {
        str[0] = '0';
        str[1] = '\0';
        return str;
    }
    while (nb > 0) {
        y = nb % 10;
        str[i] = (y + 48);
        nb /= 10;
        i++;
    }
    str[i] = '\0';
    return str;
}
