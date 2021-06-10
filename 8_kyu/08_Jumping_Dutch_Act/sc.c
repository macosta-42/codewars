#include <string.h>
#include <stdlib.h>

char* sc(int n)
{
    int     is_dead = 0;
    char    *cry = (char *)calloc(n * 4 + 8, sizeof(char));
    char    floors[] = "Aa~ ", hit_floor[] = "Pa!", not_dead[] = " Aa!";

    if (n <= 1)
        return cry;
    if (n > 6)
        is_dead = 1;
    while (n > 1)
    {
        strcat(cry, floors);
        n--;
    }
    strcat(cry, hit_floor);
    if (is_dead == 0)
        strcat(cry, not_dead);
    return cry;
}