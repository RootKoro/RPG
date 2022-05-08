/*
** ETNA PROJECT, 15/04/2022 by gueye_d
** c:\Users\hp\Documents\ETNA\PoolDay34\group-975762
** File description:
**      this file run the game at the first level
*/

#include <stdlib.h>
// #include "print.c"
// #include "my_readline.c"
// #include "bosses_list.c"
// #include "Players.h"
#include "Boss.h"
#include "fight.c"
// #include "enemies.c"

void game_start(Player_t *player){
    int result = 0;
    int j = 1;
    int i = 0;
    Boss_t boss[10];
    for (int i = 0; i < 10; i++) {
        Boss_t tab_boss;
        tab_boss.def = Boss_def[i];
        tab_boss.hp = Boss_hp[i];
        tab_boss.inte = Boss_inte[i];
        tab_boss.luck = Boss_luck[i];
        tab_boss.mp = Boss_mp[i];
        tab_boss.name = Boss_name[i];
        tab_boss.res = Boss_res[i];
        tab_boss.spd = Boss_spd[i];
        tab_boss.str = Boss_str[i];
        boss[i] = tab_boss;
    }
    // print("\n\n\nici\n\n\n");
    while (i < 10){
        print("Prepare toi a combatre au niveau du boss ");
        print(boss[i].name);
        Enemy_t enemies[100];
        fight(player, enemies);
        if (result == 0)
            return;
    }
}