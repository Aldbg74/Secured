/*
** EPITECH PROJECT, 2023
** randomname.c
** File description:
** my_compute_factorial.c test 01
*/

#include "../../include/my.h"
int my_strcmp(char const *s1, char const *s2)
{
    int a = my_strlen(s1);

    for (int i = 0; i <= a; i++) {
        if (s1[i] > s2[i])
            return (1);
        if (s1[i] < s2[i])
            return (-1);
    }
    return 0;
}
