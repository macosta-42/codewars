#include <string.h>
#include <stdlib.h>

char* sc(int n)
{
    /*  4 chars per floor + ground fall (4) + potential scream (3) + terminator.  */
    char *res = calloc(4 * n + 8, sizeof(char));
    /*  Check for floor <= 1.  */
    if(n <= 1)
        return res;

    for(int i = 0; i < n - 1; i++)
        res = strcat(res, "Aa~ ");

    /*  Append sound on falling.  */
    res = strcat(res, "Pa!");
    /*  Append potential scream.  */
    if(n <= 6)
        res = strcat(res, " Aa!");

    return res;
}