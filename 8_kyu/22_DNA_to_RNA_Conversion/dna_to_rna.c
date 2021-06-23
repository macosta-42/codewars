#include <stdlib.h>
#include <string.h>

char *dna_to_rna(const char *dna) {
    int     i = 0;
    char    *rna = (char *)calloc(strlen(dna) + 1, sizeof(char));

    while (dna && dna[i] != '\0') {
        rna[i] = dna[i] == 'T' ? 'U' : dna[i];
        i++;
    }
    rna[i] = '\0';
    return rna;
}