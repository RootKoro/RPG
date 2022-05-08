/*
** ETNA PROJECT, 16/04/2022 by gueye_d
** c:\Users\hp\Documents\ETNA\PoolDay34\group-975762
** File description:
**      this function print the stats of the player
*/
#include "Players.h"
// #include "print.c"
// #include "my_putnbr.c"
#include "rpg.h"

void stats_printer(Player_t *player){
    print("\t\tStats du joueur\n\n");
    print("PV: ");
    my_putnbr(player->hp);
    print("\t\tPuissance: ");
    my_putnbr(player->str);
    print("\t\tChance: ");
    my_putnbr(player->luck);
}