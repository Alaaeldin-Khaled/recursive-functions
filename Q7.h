void accumulate_arr(int arr[], int len)
{
    if (len != 2)
        accumulate_arr(arr, len - 1);

    arr[len - 1] += arr[len - 2];
}
