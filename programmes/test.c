/*
** ETNA PROJECT, 15/04/2022 by gueye_d
** c:\Users\hp\Documents\ETNA\PoolDay34\group-975762
** File description:
**      this is a test file
*/

// #include <stdio.h>
// #include "my_putchar.c"
// #include "my_readline.c"
// #include "my_putnbr.c"
#include "welcoming.c"
// #include "my_strcmp.c"
// #include "drawer.c"
#include "game_start.c"
// #include "Boss.h"
// #include "Enemy.h"
// #include "Players.h"
// #include "rpg.h"


void main () {
	Player_t *player = welcoming();
	stats_printer(player);
	game_start(player);
}