#include <stdlib.h>

int *difference_in_ages(size_t a, const int ages[a]) {
    int *res = malloc(sizeof(int) * 3);

    res[0] = ages[a - 1];
    res[1] = ages[a - 1];
    while (a--) {
        if (res[0] > ages[a])
            res[0] = ages[a];
        if (res[1] < ages[a])
            res[1] = ages[a];
    }
    res[2] = res[1] - res[0];
    return res;
}