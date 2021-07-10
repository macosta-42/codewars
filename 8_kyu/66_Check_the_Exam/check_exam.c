#include <stddef.h>

int check_exam(size_t n, const char answers[n], const char student[n]) {
    int ans = 0;

    while (n--) {
        if (student[n] == ' ')
            ans += 0;
        else if (student[n] == answers[n])
            ans += 4;
        else if (student[n] != answers[n])
            ans--;
    }
    return ans < 0 ? 0 : ans;;
}