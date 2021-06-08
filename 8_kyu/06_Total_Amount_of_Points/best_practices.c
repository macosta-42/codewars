
int points(char* game[]) {
    enum team { home = 0, away = 2 };
    int sum = 0;

    for (num i = 0; i < 10; i++) {
        if (game[i][home] > game[i][away]) {
            sum += 3;
        } else if (game[i][home] == game[i][away]) {
            sum += 1;
        }
    }
    return sum;
}