/*
** EPITECH PROJECT, 2023
** my_strncpy.c
** File description:
** No file there, just an epitech header example.
** You can even have multiple lines if you want!
*/

#include <unistd.h>
char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i <= n - 1 && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    return dest;
}
