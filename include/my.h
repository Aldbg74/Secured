/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday07-mathis.quenardel
** File description:
** test my.h file
*/

#ifndef MY
    #define MY
    #include <unistd.h>
    #include <stdlib.h>
    #include "secured.h"
    #include "bootstrap.h"

/// \brief the secured lib will be presented under these lines.
/// It will end after the double \n.
/// \attention another useful lib, and better organized will be present
/// in another
/// .h (secured.h in folder include).

entry_t **create_address_book(int len);
entry_t *create_address(char *name, char *phone_number);
void add_address(entry_t **address_book, int len, char *name,
    char *phone_number);
void delete_address_book(entry_t **address_book, int len);

char *my_strdup(char const *src);
void free_tab(char **tab);
// int error_in_file(void);
// int nothing(void);
int tireth(void);

char **my_str_to_word_array(char const *str);
char **generator(int map_size, char *patern);
int my_print_revalpha(void);
int is_square_of_size(char **map, int row, int col, int square_size);
char **load_2d_arr_from_file(char const *filepath);
char *load_file_in_mem(char const *filepath);
char **noti(char *folder, int nbfiles);
int count_nb(int nb);
char *entier_convert(int x);
void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_in_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_compute_factorial_it(int nb);
int my_compute_factorial_rec(int nb);
int my_compute_power_it(int nb, int p);
int my_print_alpha(char **tabtoshow);
int my_print_comb(void);
int my_print_comb2(void);
int my_print_digits(void);
int mini_printf(const char *format, ...);
#endif
