#include <stddef.h>

int check_exam(size_t n, const char answers[n], const char student[n]) {
    int score = 0;

    while (n--) {
        if (answers[n] == student[n])
            score += 4;
        else if (student[n] != ' ')
            score--;
    }
    return score > 0 ? score : 0;
}