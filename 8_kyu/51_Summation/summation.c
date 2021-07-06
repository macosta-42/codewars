int summation(int num) {
    int ans = 0;

    while (num) {
        ans += num;
        num--;
    }
    return ans;
}