/*
** EPITECH PROJECT, 2023
** my_revstr.c
** File description:
** No file there, just an epitech header example.
** You can even have multiple lines if you want!
*/

#include "../../include/my.h"
#include <unistd.h>
#include <stdio.h>

char *my_revstr(char *str)
{
    char t;
    int i = 0;

    while (i < my_strlen(str) / 2) {
        t = str[i];
        str[i] = str[my_strlen(str) - i - 1];
        str[my_strlen(str) - i - 1] = t;
        i++;
    }
    return str;
}
