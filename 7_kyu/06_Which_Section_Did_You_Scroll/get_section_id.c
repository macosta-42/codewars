#include <stdlib.h>

int get_section_id(int scroll, int *sizes, size_t sizes_length) {
    int     sum = 0;
    size_t  i = 0;

    while (i < sizes_length) {
        sum += sizes[i];
        if (sum - 1 >= scroll)
            return i;
        i++;
    }
    return -1;
}