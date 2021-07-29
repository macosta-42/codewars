#include <ctype.h>

char fightResolve(char defender, char attacker) {
    if ((isupper(defender) && isupper(attacker))  || (islower(defender) && islower(attacker)))
        return -1;
    if (tolower(attacker) == 'a' && tolower(defender) == 'k')
        return defender;
    else if (tolower(attacker) == 'p' && tolower(defender) == 's')
        return defender;
    else if (tolower(attacker) == 's' && tolower(defender) == 'a')
        return defender;
    else if (tolower(attacker) == 'k' && tolower(defender) == 'p')
        return defender;
    else
        return attacker;
}