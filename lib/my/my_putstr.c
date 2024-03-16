/*
** EPITECH PROJECT, 2023
** my_put_str.c
** File description:
** my_put_str.c test 01
*/

#include <unistd.h>
#include "../../include/my.h"
int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        write(1, &str[i], 1);
    }
    return (0);
}
