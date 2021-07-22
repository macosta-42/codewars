void remove_exclamation_marks(const char *str_in, char *str_out) {
    do
        if (*str_in != '!') *str_out++ = *str_in;
    while (*str_in++);
}