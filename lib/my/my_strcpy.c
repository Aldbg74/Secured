/*
** EPITECH PROJECT, 2023
** my_strcpy.c
** File description:
** No file there, just an epitech header example.
** You can even have multiple lines if you want!
*/

#include <unistd.h>
char *my_strcpy(char *dest, char const *src)
{
    int a = 0;

    while (src[a] != '\0') {
        a++;
    }
    for (int i = 0; i <= a; i++) {
        dest[i] = src[i];
    }
    return dest;
}
