char* remove_char(char* dst, const char* src) {
    int i = 1, j = 0;

    while (src && src[i + 1] != '\0')
        dst[j++] = src[i++];
    dst[j] = 0;
    return dst;
}