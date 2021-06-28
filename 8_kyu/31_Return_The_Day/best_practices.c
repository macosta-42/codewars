char* whatday(int num) {
    char *day[] = {
            "",
            "Sunday",
            "Monday",
            "Tuesday",
            "Wednesday",
            "Thursday",
            "Friday",
            "Saturday"
    };

    if (0 < num && num < 8) return day[num];
    else
        return "Wrong, please enter a number between 1 and 7";
}