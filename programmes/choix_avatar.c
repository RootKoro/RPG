/*
** ETNA PROJECT, 15/04/2022 by gueye_d
** c:\Users\hp\Documents\ETNA\PoolDay34\group-975762
** File description:
**      function that returns the avatar chosen
*/

#include <stdlib.h>
#include "print.c"
#include "my_readline.c"
#include "Players.h"
#include "rpg.h"

Player_t *choix_avatar(Player_t *player)
{
    int avatar_found = 0;
    print("\nENZO le magicien: Avant de commencer la partie, tu devras d'abord choisir ton personnage.\n");
    print("ENZO le magicien: Choisi dans la liste des personnages ci-dessous :\n");

    for (int i = 0; i < 5; i++) {
        print("\n__");
        print(Player_avatar[i]);
    }
    print("\n>");
    char *avatar_chosen = my_readline();

    while (!avatar_found){
        if (!my_strcmp(avatar_chosen, "//fin")) {
            print("Bye bye!\n\n");
            return NULL;
        }
        for (int i = 0; i < 5; i++)
            if (!my_strcmp(avatar_chosen, Player_avatar[i])) {
                avatar_found = 1;
                break;
            }
        if (!avatar_found){
            print("ENZO le Magicien: Celui ci n'est pas dans la liste; tache de choisir cette fois un des avatar (majuscule a verifier), ou tape \"//fin\" pour quitter! \n");
            print("\n>");
            avatar_chosen = my_readline();
        }
    }

    for (int i = 0; i < 5; i++)
        if (!my_strcmp(avatar_chosen, Player_avatar[i])) {
            player->avatar = Player_avatar[i];
            player->hp = Player_hp[i];
            player->def = Player_def[i];
            player->inte = Player_inte[i];
            player->luck = Player_luck[i];
            player->mp = Player_mp[i];
            player->res = Player_res[i];
            player->spd = Player_spd[i];
            player->str = Player_str[i];
            return player;
        }
    return NULL;
}