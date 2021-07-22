int final_grade(int exam, int projects) {
    if (90 < exam || 10 < projects) return 100;
    else if (75 < exam && 5 <= projects) return 90;
    else if (50 < exam && 2 <= projects) return 75;
    else return 0;
}