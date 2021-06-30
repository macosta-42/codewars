#include <string.h>
#include <math.h>

unsigned bin_to_decimal(const char *bin) {
    unsigned ans = 0, i = 0;

    while (bin && bin[i] != '\0') {
        ans += (bin[i] - 48) * pow(2, ((strlen(bin) - 1) - i));
        i++;
    }
    return ans;
}