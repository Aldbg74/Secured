/*
** EPITECH PROJECT, 2023
** my_compute_power_rec.c
** File description:
** my_compute_power_rec.c test 01
*/

#include <unistd.h>
int my_compute_power_rec(int nb, int p)
{
    if (p < 0) {
        return 0;
    }
    if (nb == 0 || p == 0) {
        return 1;
    }
    nb *= my_compute_power_rec(nb, p - 1);
    return (nb);
}
