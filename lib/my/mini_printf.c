/*
** EPITECH PROJECT, 2023
** randomname.c
** File description:
** my_compute_factorial.c flags 01
*/
#include <stdarg.h>
#include <unistd.h>
#include "../../include/my.h"
void printaperc(int **counter)
{
    write(1, "%", 1);
    (**counter)++;
}

int pted_digits(int pted_number)
{
    int i = 0;

    if (pted_number == 0) {
        return i + 1;
    }
    if (pted_number < 0) {
        i = i + 1;
        pted_number *= -1;
    }
    while (pted_number > 10) {
        i++;
        pted_number = pted_number / 10;
    }
    i++;
    return i;
}

void flags(char const *c, va_list parameters, int i, int *counter)
{
    char *str;
    int to_pt_nb = 0;

    if (c[i + 1] == 'd' || c[i + 1] == 'i') {
        to_pt_nb = va_arg(parameters, int);
        my_put_nbr(to_pt_nb);
        (*counter) += pted_digits(to_pt_nb);
    }
    if (c[i + 1] == 's') {
        str = va_arg(parameters, char *);
        my_putstr(str);
        (*counter) += my_strlen(str);
    }
    if (c[i + 1] == '%') {
        printaperc(&counter);
    }
    if (c[i + 1] == 'c') {
        my_putchar(va_arg(parameters, int));
        (*counter)++;
    }
}

int mini_printf(const char *format, ...)
{
    va_list parameters;
    int counter = 0;

    va_start(parameters, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            flags(format, parameters, i, &counter);
            i++;
        } else {
            write(1, &format[i], 1);
            counter++;
        }
    }
    va_end(parameters);
    return counter;
}
