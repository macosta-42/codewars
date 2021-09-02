unsigned solution(const char *str) {
    int i = 0, res = 0;

    while (str && str[i] != '\0') {
        if (str[i] == str[i + 1])
            res++;
        i++;
    }
    return res;
}