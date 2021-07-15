char get_grade(int a, int b, int c) {
    int avg = (a + b + c) / 3;

    if (0 <= avg && avg < 60) return 'F';
    else if (60 <= avg && avg < 70) return 'D';
    else if (70 <= avg && avg < 80) return 'C';
    else if (80 <= avg && avg < 90) return 'B';
    else if (90 <= avg && avg <= 100) return 'A';
    else return ' ';
}