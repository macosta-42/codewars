#include <stdlib.h>
#include <string.h>

char *dna_to_rna(const char *dna) {
    size_t len = strlen(dna);
    char *res = malloc(len + 1);
    for (size_t i = 0; i < len; i++)
        res[i] = dna[i] == 'T' ? 'U' : dna[i];
    res[len] = '\0';
    return res;
}