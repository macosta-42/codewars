const char* evil(int value) {
    return __builtin_popcount(value) % 2 ? "It's Odious!" : "It's Evil!";
}