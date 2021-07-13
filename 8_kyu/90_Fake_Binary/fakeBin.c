// Please place result in the memory pointed to by
// the buffer parameter. Buffer has enough memory to
// accommodate the answer as well as the null-terminating
// character.

void fakeBin(const char *digits, char *buffer) {
    int i = 0;

    while (digits && digits[i] != '\0') {
        if ('0' <= digits[i] && digits[i] < '5')
            buffer[i] = '0';
        else if ('5' <= digits[i] && digits[i] <= '9')
            buffer[i] = '1';
        i++;
    }
    buffer[i] = '\0';
}
