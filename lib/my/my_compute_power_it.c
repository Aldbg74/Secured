/*
** EPITECH PROJECT, 2023
** my_compute_power_rec.c
** File description:
** my_compute_power_rec.c test 01
*/

#include <unistd.h>
int my_compute_power_it(int nb, int p)
{
    int nbfinal4 = 1;

    if (p < 0) {
        return 0;
    }
    for (int i = 1; i <= p; i++) {
        nbfinal4 *= nb;
    }
    return nbfinal4;
}
