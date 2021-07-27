/* Note: allocate memory yourself */
/* return NULL in case num == 0 */

#include <stdlib.h>

unsigned short *reverse_seq(unsigned short num)
{
    if (num==0) return NULL;
    unsigned short* res = (unsigned short*)malloc(sizeof(unsigned short)*num);
    unsigned short* resHead = res;
    while (num) {*res++ = num--;}
    return resHead;
}