/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday08-mathis.quenardel
** File description:
** my_strdup.c
*/

#include <stdlib.h>
#include <unistd.h>
char *my_strdup(char const *src)
{
    int deuspistrlen = 0;
    char *ptr;
    int i = 0;

    while (src[deuspistrlen] != '\0') {
        deuspistrlen++;
    }
    ptr = malloc(sizeof(char) * (deuspistrlen + 1));
    for (i = 0; i <= deuspistrlen; i++) {
        ptr[i] = src[i];
    }
    ptr[i + 1] = '\0';
    return ptr;
}
