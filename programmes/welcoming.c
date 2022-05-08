/*
** ETNA PROJECT, 15/04/2022 by gueye_d
** c:\Users\hp\Documents\ETNA\PoolDay34\group-975762
** File description:
**      The welcoming function
*/

#include <stdio.h>
// #include "print.c"
#include "my_strcmp.c"
#include "choix_avatar.c"
#include "rpg.h"
#include "Players.h"
// #include "includes/Boss.h"
// #include "includes/Enemy.h"

Player_t *welcoming (void)
{
    Player_t player;
    Player_t *joueur = &player;

    print("\n\nENZO le magicien: Salut joueur/se, pret(e) a te lancer dans l'aventure?\n");
    print("ENZO le magicien: Si oui, entre ton prenom ou ton surnom, sinon tape la commande magique \"//fin\"\n");
    print("Prenom / Surnom : ");

    char *name = my_readline();
    player.name = name;
    if (!my_strcmp(name, "//fin")) {
        print("Bye bye!\n\n");
        return NULL;
    }

    print("ENZO le magicien: Bienvenue a toi ");
    print(name);
    return choix_avatar(joueur);
}