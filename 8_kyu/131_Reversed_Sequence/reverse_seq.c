/* Note: allocate memory yourself */
/* return NULL in case num == 0 */

#include <stdlib.h>

unsigned short *reverse_seq(unsigned short num) {
    unsigned short *arr = malloc(sizeof(unsigned short) * num);
    int i = 0;

    if (num == 0)
        return NULL;
    while (num--) {
        arr[i] = num +1;
        i++;
    }

    return arr;
}