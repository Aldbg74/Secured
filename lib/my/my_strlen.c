/*
** EPITECH PROJECT, 2023
** my_strlen.c
** File description:
** my_strlen.c test 01
*/

int my_strlen(char const *str)
{
    int nbfinal = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        nbfinal++;
    }
    return nbfinal;
}
