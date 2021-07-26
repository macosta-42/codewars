#include <stdbool.h>

bool divide(unsigned weight) {
    unsigned int i = 2;
    while (i <= weight) {
        if ((weight / i) % 2 == 0 && weight % 2 == 0)
            return true;
        i += 2;
    }
    return false;
}