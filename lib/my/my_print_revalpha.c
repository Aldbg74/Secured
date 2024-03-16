/*
** EPITECH PROJECT, 2023
** my_print_revalpha.c
** File description:
** my_print-revalpha.c test 01
*/

#include <unistd.h>
int my_print_revalpha(void)
{
    for (int i = 'z'; i >= 'a'; i--) {
        write(1, &i, 1);
    }
    return 0;
}
