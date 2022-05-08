/*
** ETNA PROJECT, 16/04/2022 by gueye_d
** c:\Users\hp\Documents\ETNA\PoolDay34\group-975762
** File description:
**      string to number
*/

void my_putnbr(int number){
    int tmp = 1;
    while (number > 0) {
        tmp = tmp * 10 + number % 10;
        number /= 10;
    }
    while (tmp >= 10) {
        my_putchar(tmp % 10 + 48);
        tmp /= 10;
    }    
}