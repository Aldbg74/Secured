/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-secured-mathis.quenardel
** File description:
** secured.c
*/

#include "include/bootstrap.h"
#include "include/hashtable.h"
#include "include/my.h"
#include "include/mylist.h"
#include "include/secured.h"

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int i = 0;
    int k = hash(key, ht[0].len);

    for (i; i < ht[0].len; i++) {
        if (ht[i].data->key == 0) {
            ht[i].data->key = k;
            ht[i].data->message = value;
            break;
        }
    }
    if (i >= ht[0].len) {
        return 84;
    }
    return 0;
}

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *table = malloc(sizeof(hashtable_t) * (len + 1));
    int i = 0;

    table[0].len = len;
    for (i; i <= len; i++) {
        table[i].data = malloc(sizeof(dat_t));
        table[i].hash = hash;
        table[i].data->message = malloc(sizeof(char *) + 1);
        table[i].data->next = NULL;
        table[i].data->key = 0;
    }
    return table;
}

int ht_delete(hashtable_t *ht, char *key)
{
    return 0;
}

char *ht_search(hashtable_t *ht, char *key)
{
    return key;
}

static void prt_ev(int i, hashtable_t current, int yon)
{
    if (yon == 1) {
        my_putchar('[');
        my_put_nbr(i);
        my_putstr("]:\n> ");
        my_put_nbr(current.data->key);
        my_putstr(" - ");
        my_putstr(current.data->message);
        my_putchar('\n');
    } else {
        my_putchar('[');
        my_put_nbr(i);
        my_putstr("]:\n");
    }
}

void ht_dump(hashtable_t *ht)
{
    for (int i = 0; i < ht[0].len; i++) {
        if (ht[i].data->key != 0) {
            prt_ev(i, ht[i], 1);
        } else {
            prt_ev(i, ht[i], 0);
        }
    }
}
