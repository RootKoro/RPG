/*
** ETNA PROJECT, 15/04/2022 by gueye_d
** c:\Users\hp\Documents\ETNA\PoolDay34\group-975762
** File description:
**      fighting function
*/

// #include "my_putchar.c"
// #include "print.c"
// #include "my_readline.c"
// #include "my_strcmp.c"
#include "Players.h"
#include "my_putnbr.c"
#include "enemies.c"
#include "stats_printer.c"
// #include "Enemies_list.c"
// #include "bosses_list.c"

int fight (Player_t * player, Enemy_t enemies[])
{
    // Enemy_t enemies[100];
    int i = 0;
    while (player->hp && enemies) {
        stats_printer(player);
        /* print("Tes stats: ");
        print("\nPv: ");
        my_putnbr(player->hp);
        print("\tPuissance: ");
        my_putnbr(player->str);
        print("\nPuissance magique: ");
        my_putnbr(player->mp); */
        print("\nStats de l'enemie: ");
        print("Pv: ");
        my_putnbr(enemies[i].hp);
        print("\tPuissance: ");
        my_putnbr(enemies[i].str);
        print("\tPuissance magique: ");
        my_putnbr(enemies[i].luck);
        print("\n\nattack?");
        print("\tdefend?");
        print("\nrun?");
        print("\theal?");
        print("\n>");
        char *response = my_readline();
        
        /* if (!my_strcmp(response, "run")){
            print("\n\nYou ran and lost the game!\n\n");
            return 0;
        } */
    }
        return 0;
}