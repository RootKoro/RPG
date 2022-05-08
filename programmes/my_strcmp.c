/*
** ETNA PROJECT, $2022
** $my_strcmp
** File description:
** 		No file there, just an etna header example
*/

int my_strcmp(const char *s1, const char *s2);

int my_strcmp(const char *s1, const char *s2)
{
    for (int i = 0 ; s1[i] || s2[i] ; i++)
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
    return 0;
}
