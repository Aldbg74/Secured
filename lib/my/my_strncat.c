/*
** EPITECH PROJECT, 2023
** mystrncat.c
** File description:
** my_compute_factorial.c test 01
*/

#include <unistd.h>
#include "../../include/my.h"
char *my_strncat(char *dest, char const *src, int nb)
{
    int strlendest = my_strlen(dest);

    for (int i = 0; i < nb; i++) {
        dest[strlendest + i] = src[i];
    }
    return dest;
}
