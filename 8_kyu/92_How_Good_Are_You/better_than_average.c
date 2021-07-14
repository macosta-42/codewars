int better_than_average(int class_points[], int class_size, int your_points) {
    int sum = 0, avg = 0;

    for (int i = 0; i < class_size; i++)
        sum += class_points[i];
    avg = (sum + your_points) / (class_size + 1);
    return avg < your_points;
}