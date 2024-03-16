/*
** EPITECH PROJECT, 2023
** test_my_strstr.c
** File description:
** No file there, just an epitech header example.
** You can even have multiple lines if you want!
*/

#include <unistd.h>
char *my_strstr(char *str, char const *to_find)
{
    if (str[0] == '\0') {
        return 0;
    }
    for (int i = 0; to_find[i] != '\0'; i++) {
        if (to_find[i] != str[i]) {
            return my_strstr(str + 1, to_find);
        }
        return str;
    }
}
