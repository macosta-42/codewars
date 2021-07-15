int enough(int cap, int on, int wait) {
    int ans = cap - (on + wait);
    return ans > 0 ? 0 : ans < 0 ? ans * -1 : 0;
}