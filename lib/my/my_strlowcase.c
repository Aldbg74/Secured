/*
** EPITECH PROJECT, 2023
** randomname.c
** File description:
** my_compute_factorial.c test 01
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] += 32;
        }
    }
    return str;
}
