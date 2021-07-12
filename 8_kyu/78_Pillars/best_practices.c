long pillars(int n, int d, int w) {
    return n == 1? 0 : --n * d * 100 + --n * w;
}