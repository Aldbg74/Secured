/*
** EPITECH PROJECT, 2023
** mystrcat.c
** File description:
** my_compute_factorial.c test 01
*/

#include <unistd.h>
#include "../../include/my.h"
// char *my_strcat(char *dest, char const *src)
// {
//     int strlensrc = my_strlen(src);
//     int strlendest = my_strlen(dest);

//     for (int i = 0; i < strlensrc; i++) {
//         dest[strlendest + i] = src[i];
//     }
//     dest[strlendest + strlensrc] = '\0';
//     return dest;
// }

char *my_strcat(char *base, char const *add)
{
    int len_base = my_strlen(base);
    int x = 0;

    while (add[x] != '\0') {
        base[len_base + x] = add[x];
        x++;
    }
    base[len_base + x] = '\0';
    return base;
}
