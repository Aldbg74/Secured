/*
** EPITECH PROJECT, 2023
** my_compute_power_rec.c
** File description:
** my_compute_power_rec.c test 01
*/

#include <unistd.h>
//#include <stdio.h>
/*int testfloat(int number)
{
    //returns 0 if float & 1 if int
    int test = (int) number;
    int decpart = number - test;
    printf("%d", test);
    printf("%d", decpart);
    if (decpart > 0) {
        write(1, "0", 1);
        write(1, "\n", 1);
        return 0;
    } else {
        write(1, "1", 1);
        write(1, "\n", 1);
        return 1;
    }
}
*/

int my_compute_square_root(int nb)
{
    int res = 0;

    if (nb == 0 || nb < 0) {
        return 0;
    }
    while (res * res != nb) {
        res++;
    }
    return res;
}
