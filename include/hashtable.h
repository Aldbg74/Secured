/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-secured-mathis.quenardel
** File description:
** hashtable.h
*/

#ifndef HASHTABLE_H
    #define HASHTABLE_H

    #include "my.h"
    #include "mylist.h"

typedef struct dat_s {
    int key;
    char *message;
    struct dat_s *next;
} dat_t;

typedef struct hashtable_s {
    dat_t *data;
    int (*hash)(char *, int);
    int len;
} hashtable_t;

// Hash function
int hash(char *key, int len);

// Create & destroy table
hashtable_t *new_hashtable(int (*hash)(char *, int), int len);
void delete_hashtable(hashtable_t *ht);

// Handle table
int ht_insert(hashtable_t *ht, char *key, char *value);
int ht_delete(hashtable_t *ht, char *key);
char *ht_search(hashtable_t *ht, char *key);
void ht_dump(hashtable_t *ht);

#endif
