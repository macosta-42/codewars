//
// Created by Matthieu Costa on 02/06/2021.
//

#include <stdlib.h>

int *generate_range(int min, int max, int step, size_t *sz)
{
    int *ans;
    *sz = (max-min) / step + 1;

    ans = malloc( sizeof(int) * *sz );
    for ( size_t i = 0; i < *sz; i++ ) {
        ans[i] = min + step * i;
    }

    return ans;
}