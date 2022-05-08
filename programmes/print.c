/*
** ETNA PROJECT, 15/04/2022 by gueye_d
** c:\Users\hp\Documents\ETNA\PoolDay34\group-975762
** File description:
**      My print function
*/

#include "my_putchar.c"

void print(char *str) {
    char *to_print = str;
    while (*to_print)
        my_putchar(*to_print++);
}