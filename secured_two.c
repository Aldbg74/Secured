/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-secured-mathis.quenardel
** File description:
** secured_two.c
*/

#include "include/bootstrap.h"
#include "include/hashtable.h"
#include "include/my.h"
#include "include/mylist.h"
#include "include/secured.h"

static int magnus(char letter, int i)
{
    int little_rock = (int) letter;
    int the_rock = (int) letter;

    while (i != 69420) {
        little_rock += ((((i * 42 + the_rock) / 22) % 5) * 359);
        i++;
    }
    return (little_rock < 0) ? little_rock * -1 : little_rock;
}

int hash(char *key, int len)
{
    int z = 0;

    for (int i = 0; i != len + 42; i++){
        for (int j = 0; key[j] != '\0'; j++){
            z += (magnus(key[j], i) * ((42 * 2) / 69));
        }
    }
    return (z < 0) ? z * -1 : z;
}

void delete_hashtable(hashtable_t *ht)
{
    return;
}
