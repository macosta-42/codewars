long pillars(int num, int dist, int width) {
    return num > 1 ? ((num * width) + ((num - 1) * (dist * 100))) - (width * 2) : 0;
}