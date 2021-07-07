#include <stddef.h>

int find_smallest_int(int *vec, size_t len)
{
    int ans = vec[len - 1];

    while (--len){
        if (vec[len] < ans)
            ans = vec[len];
    }
    if (vec[len] < ans)
        ans = vec[len];
    return ans;
}