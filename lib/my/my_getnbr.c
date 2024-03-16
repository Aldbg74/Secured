/*
** EPITECH PROJECT, 2023
** randomname.c
** File description:
** my_compute_factorial.c test 01
*/

int my_getnbr(char const *str)
{
    int isfirstanumber = 0;
    int a = 0;
    int b = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < '0' || str[i] > '9') && isfirstanumber == 1)
            break;
        if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9') {
            a = 1;
            i++;
        }
        isfirstanumber = 1;
        b = b * 10 + (str[i] - '0');
        if ((2147483647 - b) < 0)
            b = 0;
    }
    if (a == 1)
        b *= -1;
    return b;
}
