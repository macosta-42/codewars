int sum(int* numbers, int numbersCount) {
    int max = numbers[0], min = numbers[0], sum = 0;

    if (numbersCount <= 1 || !numbers)
        return 0;

    for (int i = 0; i < numbersCount; i++) {
        sum += numbers[i];
        if (max < numbers[i])
            max = numbers[i];
        if (numbers[i] < min)
            min = numbers[i];
    }
    return sum - max - min;
}