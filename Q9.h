void right_max(int arr[], int len, int start_pos = 0)
{
    //{ 1, 8, 2, 10, 3 }
    arr[len - 2] = max(arr[len - 2], arr[len - 1]);

    if (len != 2)
        right_max(arr, len - 1);
}
