int mod256WithoutMod(int num) {
    return num - 256 * (num / 256);
}