int* revR (int* array, int n) {
    int temp;

    if(n==1)
        return array;
    if(n==0)
        return 0;
    temp=array[0];
    array[0]=array[n-1];
    array[n-1]=temp;
    revR(&array[1], n-2);
    return array;
}