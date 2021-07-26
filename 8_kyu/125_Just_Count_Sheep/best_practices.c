char* count_sheep(int n) {
    char* result = calloc(n * 15 + 1, sizeof(char));
    char* buffer = calloc(20, sizeof(char));

    for(int i = 1; i <= n; i++) {
        sprintf(buffer, "%i sheep...", i);
        strcat(result, buffer);
    }
    return result;
}