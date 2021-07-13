char *triple_trouble(const char *one, const char *two, const char *three) {
    char *buf = calloc(strlen(one) * 3 + 1, 1), *p = buf;

    while (*one)
        *p++ = *one++, *p++ = *two++, *p++ = *three++;
    return buf;
}