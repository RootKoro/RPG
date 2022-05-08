/*
** ETNA PROJECT, 15/04/2022 by gueye_d
** c:\Users\hp\Documents\ETNA\PoolDay34\group-975762
** File description:
**      enemies function
*/

// #include "Enemies_list.c"
#include "Enemy.h"
// #include "my_strcmp.c"

void enemies(int level, Enemy_t enemies[])
{
    // Enemy_t enemies[100] = {0};
    int enemies_number = 0;
    switch (level) {
    case 1: case 2:
        while (enemies_number < 10) {
            Enemy_t sbirs;
            for (int i = 0; i < 10; i++) {
                if (!my_strcmp("Goblin", Enemy_name[i])) {
                    sbirs.name = Enemy_name[i];
                    sbirs.def = Enemy_def[i];
                    sbirs.hp = Enemy_hp[i];
                    sbirs.inte = Enemy_inte[i];
                    sbirs.luck = Enemy_luck[i];
                    sbirs.mp = Enemy_mp[i];
                    sbirs.res = Enemy_res[i];
                    sbirs.spd = Enemy_spd[i];
                    sbirs.str = Enemy_str[i];
                    enemies[enemies_number] = sbirs;
                    break;
                }
            }
        }

        break;
    case 3: case 4:
        while (enemies_number < 15) {
            Enemy_t sbirs;
            for (int i = 0; i < 10; i++) {
                if (!my_strcmp("Troll", Enemy_name[i])) {
                    sbirs.name = Enemy_name[i];
                    sbirs.def = Enemy_def[i];
                    sbirs.hp = Enemy_hp[i];
                    sbirs.inte = Enemy_inte[i];
                    sbirs.luck = Enemy_luck[i];
                    sbirs.mp = Enemy_mp[i];
                    sbirs.res = Enemy_res[i];
                    sbirs.spd = Enemy_spd[i];
                    sbirs.str = Enemy_str[i];
                    enemies[enemies_number] = sbirs;
                    break;
                }
            }
        }

        break;
    case 5: case 6:
        while (enemies_number < 20) {
            Enemy_t sbirs;
            for (int i = 0; i < 10; i++) {
                if (!my_strcmp("Skeleton", Enemy_name[i])) {
                    sbirs.name = Enemy_name[i];
                    sbirs.def = Enemy_def[i];
                    sbirs.hp = Enemy_hp[i];
                    sbirs.inte = Enemy_inte[i];
                    sbirs.luck = Enemy_luck[i];
                    sbirs.mp = Enemy_mp[i];
                    sbirs.res = Enemy_res[i];
                    sbirs.spd = Enemy_spd[i];
                    sbirs.str = Enemy_str[i];
                    enemies[enemies_number] = sbirs;
                    break;
                }
            }
        }

        break;
    case 7: case 8: case 9:
        while (enemies_number < 25) {
            Enemy_t sbirs;
            for (int i = 0; i < 10; i++) {
                if (!my_strcmp("Goblin", Enemy_name[i]) || !my_strcmp("Troll", Enemy_name[i])) {
                    sbirs.name = Enemy_name[i];
                    sbirs.def = Enemy_def[i];
                    sbirs.hp = Enemy_hp[i];
                    sbirs.inte = Enemy_inte[i];
                    sbirs.luck = Enemy_luck[i];
                    sbirs.mp = Enemy_mp[i];
                    sbirs.res = Enemy_res[i];
                    sbirs.spd = Enemy_spd[i];
                    sbirs.str = Enemy_str[i];
                    enemies[enemies_number] = sbirs;
                }
            }
        }

        break;
    case 10:
        while (enemies_number < 30) {
            Enemy_t sbirs;
            for (int i = 0; i < 10; i++) {
                if (!my_strcmp("Goblin", Enemy_name[i]) || !my_strcmp("Troll", Enemy_name[i]) || !my_strcmp("Skeleton", Enemy_name[i])) {
                    sbirs.name = Enemy_name[i];
                    sbirs.def = Enemy_def[i];
                    sbirs.hp = Enemy_hp[i];
                    sbirs.inte = Enemy_inte[i];
                    sbirs.luck = Enemy_luck[i];
                    sbirs.mp = Enemy_mp[i];
                    sbirs.res = Enemy_res[i];
                    sbirs.spd = Enemy_spd[i];
                    sbirs.str = Enemy_str[i];
                    enemies[enemies_number] = sbirs;
                }
            }
        }

        break;
    default:
        return;
    }
}
