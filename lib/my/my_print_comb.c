/*
** EPITECH PROJECT, 2023
** my_print_comb.c
** File description:
** my_print_comb.c test 03
*/

#include <unistd.h>
int my_print_comb(void)
{
    char a = 48;
    char b = 49;
    char c = 50;

    for (int i = 0; a < 56; i++) {
        write(1, &a, 1) && write(1, &b, 1) && write(1, &c, 1);
        if (a != 55 || b != 56 || c != 57) {
            write(1, ", ", 2);
        }
        c++;
        if (c == 58) {
            b++;
            c = b + 1;
        }
        if (b == 57 && c == 58) {
            a++;
            b = a + 1;
            c = b + 1;
        }
    }
}
