//
// Created by Matthieu Costa on 02/06/2021.
//

//  1) dynamically allocate memory for the return array
//  2) assign the size of this array to the pointer *sz

#include <stdlib.h>

int *generate_range(int min, int max, int step, size_t *sz)
{
    int range;
    int *tab;

    *sz = 0;
    range = ((max - min) / step) + 1;
    if (!(tab = malloc(sizeof(int) * range)))
        return (-1);
    while (min <= max)
    {
        tab[*sz] = min;
        min = min + step;
        (*sz)++;
    }
    return (tab);
}