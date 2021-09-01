int sumR(int* array, int n) {
    return n ? *array + sumR(++array, --n) : 0;
}