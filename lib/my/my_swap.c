/*
** EPITECH PROJECT, 2023
** my_swap.c
** File description:
** my_swap.c test 01
*/

#include <unistd.h>
void my_swap(int *a, int *b)
{
    int c = *b;

    *b = *a;
    *a = c;
}
