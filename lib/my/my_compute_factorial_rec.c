/*
** EPITECH PROJECT, 2023
** my_compute_factorial_rec.c
** File description:
** my_compute_factorial_rec.c test 01
*/

#include <unistd.h>
int my_compute_factorial_rec(int nb)
{
    int nbfinal3;

    if (nb < 0 || nb > 12) {
        return 0;
    }
    if (nb == 0) {
        return 1;
    }
    nbfinal3 = nb * my_compute_factorial_rec(nb - 1);
    return nbfinal3;
}
