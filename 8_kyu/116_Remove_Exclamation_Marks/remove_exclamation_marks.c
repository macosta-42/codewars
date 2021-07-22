// Write resulting string into buffer pointed by str_out
void remove_exclamation_marks(const char *str_in, char *str_out) {
    int i = 0, j = 0;

    while (str_in && str_in[i] != '\0') {
        if (str_in[i] != '!') {
            str_out[j] = str_in[i];
            j++;
        }
        i++;
    }
    str_out[j] = '\0';
}